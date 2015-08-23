#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

/* The MIT License (MIT)
#
# Copyright (c) 2015 by Brian Horn, trycatchhorn@gmail.com.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
*/

template<typename T> class Vector;
template<typename T> std::ostream& operator<< ( std::ostream& s, const Vector<T>& other );

template<typename T>
class Vector {

private:
  std::vector<T> base;

  /* Addition */

  // vector + scalar
  template<typename T1, typename T2>
  friend auto operator + ( const Vector<T1> & lhs, const T2 & scalar ) -> Vector<std::common_type_t<T1,T2>>;

  // scalar + vector
  template<typename T1, typename T2>
  friend auto operator + ( const T1 & scalar, const Vector<T2> & rhs ) -> Vector<std::common_type_t<T1,T2>>;

  // vector + vector
  template<typename T1, typename T2>
  friend auto operator + ( const Vector<T1> & lhs, const Vector<T2> & rhs ) -> Vector<std::common_type_t<T1,T2>>;

  /* Subtraction */

  // vector - scalar
  template<typename T1, typename T2>
  friend auto operator - ( const Vector<T1> & lhs, const T2 & scalar ) -> Vector<std::common_type_t<T1,T2>>;

  // scalar - vector
  template<typename T1, typename T2>
  friend auto operator - ( const T1 & scalar, const Vector<T2> & rhs ) -> Vector<std::common_type_t<T1,T2>>;

  // vector - vector
  template<typename T1, typename T2>
  friend auto operator - ( const Vector<T1> & lhs, const Vector<T2> & rhs ) -> Vector<std::common_type_t<T1,T2>>;

  // Equal operator
  template<typename T1, typename T2>
  friend bool operator == ( const Vector<T1> & lhs, const Vector<T2> & rhs );

  // Not equal operator
  template<typename T1, typename T2>
  friend bool operator != ( const Vector<T1> & lhs, const Vector<T2> & rhs );


  friend std::ostream& operator << <T> ( std::ostream& s, const Vector<T>& other );

public:
  Vector();
  explicit Vector(std::initializer_list<T> values);
  Vector( const Vector<T>& other );
  Vector<T>& operator = ( const Vector<T> &other );
  auto& operator [] ( int i );
  bool empty() const;
  void insert( const T element );
};

template<typename T>
Vector<T>::Vector() : base() {
}

template<typename T>
Vector<T>::Vector(const std::initializer_list<T> values) : base() {
  std::copy( values.begin(), values.end(), std::back_inserter( base ) );
}

template<typename T>
Vector<T>::Vector( const Vector<T>& other ) {
  base = other.base;
}

template<typename T>
Vector<T>& Vector<T>::operator = ( const Vector<T> &other ) {
  base = other.base;
}

template<typename T>
auto& Vector<T>::operator [] ( int i ) {
  assert( i >= 0 && i < base.size() );
  return base[i];
}

template<typename T>
void Vector<T>::insert( const T element ) {
  base.push_back( element );
}

template<typename T>
bool Vector<T>::empty() const {
  return base.empty();
}

// vector + scalar
template<typename T1, typename T2>
auto operator + ( const Vector<T1> & lhs, const T2 & scalar )
  -> Vector<std::common_type_t<T1,T2>>
{

  using T3 = std::common_type_t<T1, T2>;
  Vector<T3> result;
  result.base.reserve( lhs.base.size() );
  std::transform( lhs.base.begin(), lhs.base.end(), std::back_inserter( result.base ),
                 [&scalar]( const T3 & element ) { return element + scalar; } );
  return result;
}

// scalar + vector
template<typename T1, typename T2>
  auto operator + ( const T1 & scalar, const Vector<T2> & rhs )
  -> Vector<std::common_type_t<T1,T2>>
{
  using T3 = std::common_type_t<T1, T2>;
  Vector<T3> result;
  result.base.reserve( rhs.base.size() );
  std::transform( rhs.base.begin(), rhs.base.end(), std::back_inserter( result.base ),
                 [&scalar](const T3 & element) { return scalar + element; } );
  return result;
}

// vector + vector
template<typename T1, typename T2>
  auto operator + ( const Vector<T1> & lhs, const Vector<T2> & rhs )
  -> Vector<std::common_type_t<T1,T2>>
{
  using T3 = std::common_type_t<T1, T2>;
  assert(lhs.base.size() == rhs.base.size());
  Vector<T3> result;
  result.base.reserve( lhs.base.size() );
  std::transform( lhs.base.begin(), lhs.base.end(), rhs.base.begin(), std::back_inserter( result.base ),
                 []( const T1 & e1, const T2 & e2 ) { return (T3) e1 + e2; } );
  return result;
}

// vector - scalar
template<typename T1, typename T2>
auto operator - ( const Vector<T1> & lhs, const T2 & scalar )
  -> Vector<std::common_type_t<T1,T2>>
{

  using T3 = std::common_type_t<T1, T2>;
  Vector<T3> result;
  result.base.reserve( lhs.base.size() );
  std::transform( lhs.base.begin(), lhs.base.end(), std::back_inserter( result.base ),
                 [&scalar]( const T3 & element ) { return element - scalar; } );
  return result;
}

// scalar - vector
template<typename T1, typename T2>
  auto operator - ( const T1 & scalar, const Vector<T2> & rhs )
  -> Vector<std::common_type_t<T1,T2>>
{
  using T3 = std::common_type_t<T1, T2>;
  Vector<T3> result;
  result.base.reserve( rhs.base.size() );
  std::transform( rhs.base.begin(), rhs.base.end(), std::back_inserter( result.base ),
                 [&scalar]( const T3 & element ) { return scalar - element; } );
  return result;
}

// vector - vector
template<typename T1, typename T2>
  auto operator - ( const Vector<T1> & lhs, const Vector<T2> & rhs )
  -> Vector<std::common_type_t<T1,T2>>
{
  using T3 = std::common_type_t<T1, T2>;
  assert( lhs.base.size() == rhs.base.size() );
  Vector<T3> result;
  result.base.reserve( lhs.base.size() );
  std::transform( lhs.base.begin(), lhs.base.end(), rhs.base.begin(), std::back_inserter( result.base ),
                 []( const T1 & e1, const T2 & e2 ) { return (T3) e1 - e2; } );
  return result;
}

// Equal operator
template<typename T1, typename T2>
bool operator == ( const Vector<T1> & lhs, const Vector<T2> & rhs ) {
  return lhs.base == rhs.base;
}

// Not equal operator
template<typename T1, typename T2>
bool operator != ( const Vector<T1> & lhs, const Vector<T2> & rhs ) {
  return lhs.base != rhs.base;
}

template<typename T>
std::ostream& operator<< ( std::ostream& s, const Vector<T>& other ) {
  s << "(";
  if ( other.empty() ) {
    s << ")";
    return s;
  }
  size_t i;
  for ( i = 0; i < other.base.size() - 1; i++ ) {
    s << other.base[i] << ", ";
  }
  s << other.base[other.base.size() - 1] << ")";
  return s;
}


