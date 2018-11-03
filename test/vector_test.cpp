#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include "../include/vector.h"

// Empty constructor
bool test_vector_empty_constructor() {
  bool result = false;
  // Create empty vector
  Vector<int> v;
  if ( v.empty() ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "v = " << v << "\t\t\t\t\t\t\t\t\t";
  #endif
  return result;
}

// Initializer constructor
bool test_vector_initializer_constructor() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { 1, 2, 3 } );
  // Create vector containing elements
  auto v = Vector<int>( { 1, 2, 3 } );
  if ( v == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "v = " << v << "\t\t\t\t\t\t\t\t";
  #endif
  return result;
}

// vector + scalar (vector int and scalar int)
bool test_vector_int_scalar_int_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { 3, 4, 5 } );
  // Create vector
  auto v = Vector<int>( { 1, 2, 3 } );
  // Create scalar
  int s = 2;
  // vector * scalar
  Vector<int> res = v + s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v + s = " << v << " + " << s << " = " << res << "\t\t\t\t\t";
  #endif
  return result;
}

// vector + scalar (vector float and scalar float)
bool test_vector_float_scalar_float_addition() {
  bool result = false;
  // Create reference vector
  Vector<float> ref;
  ref.insert( 3.2f );
  ref.insert( 4.2f );
  ref.insert( 5.2f );
  // Create vector
  Vector<float> v;
  v.insert( 1.1f );
  v.insert( 2.1f );
  v.insert( 3.1f );
  // Create scalar
  float s = 2.1f;
  // vector + scalar
  Vector<float> res = v + s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v + s = " << v << " + " << s << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector + scalar (vector double and scalar double)
bool test_vector_double_scalar_double_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<double>( { 3.2, 4.2, 5.2 } );
  // Create vector
  auto v = Vector<double>( { 1.1, 2.1, 3.1 } );
  // Create scalar
  double s = 2.1;
  // vector + scalar
  Vector<double> res = v + s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v + s = " << v << " + " << s << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector + scalar (vector short and scalar short)
bool test_vector_short_scalar_short_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<short>( { 3, 4, 5 } );
  // Create vector
  auto v = Vector<short>( { 1, 2, 3 } );
  // Create scalar
  short s = 2;
  // vector + scalar
  Vector<short> res = v + s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v + s = " << v << " + " << s << " = " << res << "\t\t\t\t\t";
  #endif
  return result;
}

// vector + scalar (vector long and scalar long)
bool test_vector_long_scalar_long_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<long>( { 30L, 40L, 50L } );
  // Create vector
  auto v = Vector<long>( { 10L, 20L, 30L } );
  // Create scalar
  long s = 20L;
  // vector + scalar
  Vector<long> res = v + s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v + s = " << v << " + " << s << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// vector + scalar (vector int and scalar float)
bool test_vector_int_scalar_float_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { 3.1f, 4.1f, 5.1f } );
  // Create vector
  auto v = Vector<int>( { 1, 2, 3 } );
  // Create scalar
  float s = 2.1f;
  // vector + scalar
  Vector<float> res = v + s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v + s = " << v << " + " << s << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// scalar + vector (scalar int and vector int)
bool test_scalar_int_vector_int_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { 3, 4, 5 } );
  // Create scalar
  int s = 2;
  // Create vector
  auto v = Vector<int>( { 1, 2, 3 } );
  // scalar + vector
  Vector<int> res = s + v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s + v = " << s << " + " << v << " = " << res << "\t\t\t\t\t";
  #endif
  return result;
}

// scalar + vector (scalar float and vector float)
bool test_scalar_float_vector_float_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { 3.2f, 4.2f, 5.2f } );
  // Create scalar
  float s = 2.1f;
  // Create vector
  auto v = Vector<float>( { 1.1f, 2.1f, 3.1f } );
  // scalar + vector
  Vector<float> res = s + v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s + v = " << s << " + " << v << " = " << res << "\t\t\t";
  #endif
  return result;
}

// scalar + vector (scalar double and vector double)
bool test_scalar_double_vector_double_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<double>( { 3.2, 4.2, 5.2 } );
  // Create scalar
  double s = 2.1;
  // Create vector
  auto v = Vector<double>( { 1.1, 2.1, 3.1 } );
  // scalar + vector
  Vector<double> res = s + v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s + v = " << s << " + " << v << " = " << res << "\t\t\t";
  #endif
  return result;
}

// scalar + vector (scalar short and vector short)
bool test_scalar_short_vector_short_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<short>( { 3, 4, 5 } );
  // Create scalar
  short s = 2;
  // Create vector
  auto v = Vector<short>( { 1, 2, 3 } );
  // scalar + vector
  Vector<short> res = s + v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s + v = " << s << " + " << v << " = " << res << "\t\t\t\t\t";
  #endif
  return result;
}

// scalar + vector (scalar long and vector long)
bool test_scalar_long_vector_long_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<long>( { 30L, 40L, 50L } );
  // Create scalar
  long s = 20L;
  // Create vector
  auto v = Vector<long>( { 10L, 20L, 30L } );
  // scalar + vector
  Vector<long> res = s + v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s + v = " << s << " + " << v << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// scalar + vector (scalar int and vector float)
bool test_scalar_int_vector_float_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { 3.1f, 4.1f, 5.1f } );
  // Create scalar
  float s = 2.1f;
  // Create vector
  auto v = Vector<int>( { 1, 2, 3 } );
  // scalar + vector
  Vector<float> res = s + v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s + v = " << s << " + " << v << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// vector + vector (vector int and vector int)
bool test_vector_int_vector_int_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { 3, 7, 11 } );
  // Create vector v1
  auto v1 = Vector<int>( { 1, 3, 5 } );
  // Create vector v2
  auto v2 = Vector<int>( { 2, 4, 6 } );
  // vector + vector
  Vector<int> res = v1 + v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector + vector (vector float and vector float)
bool test_vector_float_vector_float_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { 3.2f, 7.2f, 11.2f } );
  // Create vector v1
  auto v1 = Vector<float>( { 1.1f, 3.1f, 5.1f } );
  // Create vector v2
  auto v2 = Vector<float>( { 2.1f, 4.1f, 6.1f } );
  // vector + vector
  Vector<float> res = v1 + v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << "\t";
  #endif
  return result;
}

// vector + vector (vector double and vector double)
bool test_vector_double_vector_double_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<double>( { 3.2, 7.2, 11.2 } );
  // Create vector v1
  auto v1 = Vector<double>( { 1.1, 3.1, 5.1 } );
  // Create vector v2
  auto v2 = Vector<double>( { 2.1, 4.1, 6.1 } );
  // vector + vector
  Vector<double> res = v1 + v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << "\t";
  #endif
  return result;
}

// vector + vector (vector short and vector short)
bool test_vector_short_vector_short_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<short>( { 3, 7, 11 } );
  // Create vector v1
  auto v1 = Vector<short>( { 1, 3, 5 } );
  // Create vector v2
  auto v2 = Vector<short>( { 2, 4, 6 } );
  // vector + vector
  Vector<short> res = v1 + v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector + vector (vector long and vector long)
bool test_vector_long_vector_long_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<long>( { 30L, 70L, 110L } );
  // Create vector v1
  auto v1 = Vector<long>( { 10L, 30L, 50L } );
  // Create vector v2
  auto v2 = Vector<long>( { 20L, 40L, 60L } );
  // vector + vector
  Vector<long> res = v1 + v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << "\t\t";
  #endif
  return result;
}

// vector + vector (vector int and vector float)
bool test_vector_int_vector_float_addition() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { 3.1f, 7.1f, 11.1f } );
  // Create vector v1
  auto v1 = Vector<int>( { 1, 3, 5 } );
  // Create vector v2
  auto v2 = Vector<float>( { 2.1f, 4.1f, 6.1f } );
  // vector + vector
  Vector<float> res = v1 + v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << "\t\t";
  #endif
  return result;
}

// vector += scalar (vector int and scalar int)
bool test_vector_int_scalar_int_compound_addition_assignment() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { 3, 4, 5 } );
  // Create vector v1
  auto v1 = Vector<int>( { 1, 2, 3 } );
  // Create temp vector
  auto tmp = v1;
  // Create scalar s
  int s = 2;
  // vector += scalar
  v1 += s;
  if ( v1 == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 += s = " << tmp << " += " << s << " = ";
    std::cout << v1 << "\t\t\t\t";
  #endif
  return result;
}

// vector += vector (vector int and vector int)
bool test_vector_int_vector_int_compound_addition_assignment() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { 5, 7, 9 } );
  // Create vector v1
  auto v1 = Vector<int>( { 1, 2, 3 } );
  // Create tmp vector
  auto tmp = v1;
  // Create vector v2
  auto v2 = Vector<int>( { 4, 5, 6 } );
  // vector += vector
  v1 += v2;
  if ( v1 == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 += v2 = " << tmp << " += " << v2 << " = ";
    std::cout << v1 << "\t\t\t";
  #endif
  return result;
}

// vector - scalar (vector int and scalar int)
bool test_vector_int_scalar_int_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { -1, 0, 1 } );
  // Create vector
  auto v = Vector<int>( { 1, 2, 3 } );
  // Create scalar
  int s = 2;
  // vector - scalar
  Vector<int> res = v - s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v - s = " << v << " - " << s << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// vector - scalar (vector float and scalar float)
bool test_vector_float_scalar_float_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { -1.0f, 0.0f, 1.0 } );
  // Create vector
  auto v = Vector<float>( { 1.1f, 2.1f, 3.1f } );
  // Create scalar
  float s = 2.1f;
  // vector - scalar
  Vector<float> res = v - s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v - s = " << v << " - " << s << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector - scalar (vector double and scalar double)
bool test_vector_double_scalar_double_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<double>( { -1.0, 0.0, 1.0 } );
  // Create vector
  auto v = Vector<double>( { 1.1, 2.1, 3.1 } );
  // Create scalar
  double s = 2.1;
  // vector - scalar
  Vector<double> res = v - s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v - s = " << v << " - " << s << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector - scalar (vector short and scalar short)
bool test_vector_short_scalar_short_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<short>( { -1, 0, 1 } );
  // Create vector
  auto v = Vector<short>( { 1, 2, 3 } );
  // Create scalar
  short s = 2;
  // vector - scalar
  Vector<short> res = v - s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v - s = " << v << " - " << s << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// vector - scalar (vector long and scalar long)
bool test_vector_long_scalar_long_subtraction(){
  bool result = false;
  // Create reference vector
  auto ref = Vector<long>( { -10L, 0L, 10 } );
  // Create vector
  auto v = Vector<long>( { 10L, 20L, 30L } );
  // Create scalar
  long s = 20L;
  // vector - scalar
  Vector<long> res = v - s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v - s = " << v << " - " << s << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// vector - scalar (vector int and scalar float)
bool test_vector_int_scalar_float_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { -1.1f, -0.1f, 1.1f } );
  // Create vector
  auto v = Vector<int>( { 1, 2, 3 } );
  // Create scalar
  float s = 2.1f;
  // vector - scalar
  Vector<float> res = v - s;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v - s = " << v << " - " << s << " = " << res << "\t\t\t";
  #endif
  return result;
}

// scalar - vector (scalar int and vector int)
bool test_scalar_int_vector_int_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { 1, 0, -1 } );
  // Create scalar
  int s = 2;
  // Create vector
  auto v = Vector<int>( { 1, 2, 3 } );
  // scalar - vector
  Vector<int> res = s - v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s - v = " << s << " - " << v << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// scalar - vector (scalar float and vector float)
bool test_scalar_float_vector_float_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { 1.0f, 0.0f, -1.0f } );
  // Create scalar
  float s = 2.1f;
  // Create vector
  auto v = Vector<float>( { 1.1f, 2.1f, 3.1f } );
  // scalar - vector
  Vector<float> res = s - v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s - v = " << s << " - " << v << " = " << res << "\t\t\t";
  #endif
  return result;
}

// scalar - vector (scalar double and vector double)
bool test_scalar_double_vector_double_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<double>( { 1.0, 0.0, -1.0 } );
  // Create scalar
  double s = 2.1;
  // Create vector
  auto v = Vector<double>( { 1.1, 2.1, 3.1 } );
  // scalar - vector
  Vector<double> res = s - v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s - v = " << s << " - " << v << " = " << res << "\t\t\t";
  #endif
  return result;
}

// scalar - vector (scalar short and vector short)
bool test_scalar_short_vector_short_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<short>( { 1, 0, -1 } );
  // Create scalar
  short s = 2;
  // Create vector
  auto v = Vector<short>( { 1, 2, 3 } );
  // scalar - vector
  Vector<short> res = s - v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s - v = " << s << " - " << v << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// scalar - vector (scalar long and vector long)
bool test_scalar_long_vector_long_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<long>( { 10L, 0L, -10L } );
  // Create scalar
  long s = 20L;
  // Create vector
  auto v = Vector<long>( { 10L, 20L, 30L } );
  // scalar - vector
  Vector<long> res = s - v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s - v = " << s << " - " << v << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// scalar - vector (scalar int and vector float)
bool test_scalar_int_vector_float_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { 0.9f, -0.1f, -1.1f } );
  // Create scalar
  int s = 2;
  // Create vector
  auto v = Vector<float>( { 1.1f, 2.1f, 3.1f } );
  // scalar - vector
  Vector<float> res = s - v;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = s - v = " << s << " - " << v << " = " << res << "\t\t";
  #endif
  return result;
}

// vector - vector (vector int and vector int)
bool test_vector_int_vector_int_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<int>( { -1, -1, -1 } );
  // Create vector v1
  auto v1 = Vector<int>( { 1, 3, 5 } );
  // Create vector v2
  auto v2 = Vector<int>( { 2, 4, 6 } );
  // vector - vector
  Vector<int> res = v1 - v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector - vector (vector float and vector float)
bool test_vector_float_vector_float_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { -1.0f, -1.0f, -1.0f } );
  // Create vector v1
  auto v1 = Vector<float>( { 1.1f, 3.1f, 5.1f } );
  // Create vector v2
  auto v2 = Vector<float>( { 2.1f, 4.1f, 6.1f } );
  // vector - vector
  Vector<float> res = v1 - v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << "\t";
  #endif
  return result;
}

// vector - vector (vector double and vector double)
bool test_vector_double_vector_double_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<double>( { -1.0, -1.0, -1.0 } );
  // Create vector v1
  auto v1 = Vector<double>( { 1.1, 3.1, 5.1 } );
  // Create vector v2
  auto v2 = Vector<double>( { 2.1, 4.1, 6.1 } );
  // vector + vector
  Vector<double> res = v1 - v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << "\t";
  #endif
  return result;
}

// vector - vector (vector short and vector short)
bool test_vector_short_vector_short_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<short>( { -1, -1, -1 } );
  // Create vector v1
  auto v1 = Vector<short>( { 1, 3, 5 } );
  // Create vector v2
  auto v2 = Vector<short>( { 2, 4, 6 } );
  // vector - vector
  Vector<short> res = v1 - v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << "\t\t\t";
  #endif
  return result;
}

// vector - vector (vector long and vector long)
bool test_vector_long_vector_long_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<long>( { -10L, -10L, -10L } );
  // Create vector v1
  auto v1 = Vector<long>( { 10L, 30L, 50L } );
  // Create vector v2
  auto v2 = Vector<long>( { 20L, 40L, 60L } );
  // vector - vector
  Vector<long> res = v1 - v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << "\t\t";
  #endif
  return result;
}

// vector - vector (vector int and vector float)
bool test_vector_int_vector_float_subtraction() {
  bool result = false;
  // Create reference vector
  auto ref = Vector<float>( { -1.1f, -1.1f, -1.1f } );
  // Create vector v1
  auto v1 = Vector<int>( { 1, 3, 5 } );
  // Create vector v2
  auto v2 = Vector<float>( { 2.1f, 4.1f, 6.1f } );
  // vector - vector
  Vector<float> res = v1 - v2;
  if ( res == ref ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << "\t";
  #endif
  return result;
}

// vector equal operator
bool test_vector_equal_operator() {
  bool result = false;
  // Create vector v1
  Vector<int> v1;
  v1.insert( 1 );
  v1.insert( 3 );
  v1.insert( 5 );
  // Create vector v2
  Vector<int> v2;
  v2.insert( 1 );
  v2.insert( 3 );
  v2.insert( 5 );
  // v1 == v2
  bool res = v1 == v2;
  if ( res ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 == v2 = " << v1 << " == " << v2 << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

// vector not equal operator
bool test_vector_not_equal_operator() {
  bool result = false;
  // Create vector v1
  Vector<int> v1;
  v1.insert( 1 );
  v1.insert( 2 );
  v1.insert( 3 );
  // Create vector v2
  Vector<int> v2;
  v2.insert( 4 );
  v2.insert( 5 );
  v2.insert( 6 );
  // v1 != v2
  bool res = v1 != v2;
  if ( res ) {
    result = true;
  }
  #ifdef NDEBUG
    std::cout << "res = v1 != v2 = " << v1 << " != " << v2 << " = " << res << "\t\t\t\t";
  #endif
  return result;
}

int main() {
  // Test vector constructors
  if( test_vector_empty_constructor() ) {
    std::cout << "test_vector_empty_constructor -> OK" << std::endl;
  } else {
    std::cout << "test_vector_empty_constructor -> FAIL" << std::endl;
  }
  if( test_vector_initializer_constructor() ) {
    std::cout << "test_vector_initializer_constructor -> OK" << std::endl;
  } else {
    std::cout << "test_vector_initializer_constructor -> FAIL" << std::endl;
  }
  // Test vector + scalar operators
  if( test_vector_int_scalar_int_addition() ) {
    std::cout << "test_vector_int_scalar_int_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_scalar_int_addition -> FAIL" << std::endl;
  }
  if( test_vector_float_scalar_float_addition() ) {
    std::cout << "test_vector_float_scalar_float_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_float_scalar_float_addition -> FAIL" << std::endl;
  }
  if( test_vector_double_scalar_double_addition() ) {
    std::cout << "test_vector_double_scalar_double_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_double_scalar_double_addition -> FAIL" << std::endl;
  }
  if( test_vector_short_scalar_short_addition() ) {
    std::cout << "test_vector_short_scalar_short_addition - > OK" << std::endl;
  } else {
    std::cout << "test_vector_short_scalar_short_addition - > FAIL" << std::endl;
  }
  if( test_vector_long_scalar_long_addition() ) {
    std::cout << "test_vector_long_scalar_long_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_long_scalar_long_addition -> FAIL" << std::endl;
  }
  if( test_vector_int_scalar_float_addition() ) {
    std::cout << "test_vector_int_scalar_float_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_scalar_float_addition -> FAIL" << std::endl;
  }
  // Test scalar + vector operators
  if( test_scalar_int_vector_int_addition() ) {
    std::cout << "test_scalar_int_vector_int_addition() -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_int_vector_int_addition() -> FAIL" << std::endl;
  }
  if( test_scalar_float_vector_float_addition() ) {
    std::cout << "test_scalar_float_vector_float_addition -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_float_vector_float_addition -> FAIL" << std::endl;
  }
  if( test_scalar_double_vector_double_addition() ) {
    std::cout << "test_scalar_double_vector_double_addition -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_double_vector_double_addition -> FAIL" << std::endl;
  }
  if( test_scalar_short_vector_short_addition() ) {
    std::cout << "test_scalar_short_vector_short_addition -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_short_vector_short_addition -> FAIL" << std::endl;
  }
  if( test_scalar_long_vector_long_addition() ) {
    std::cout << "test_scalar_long_vector_long_addition -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_long_vector_long_addition -> FAIL" << std::endl;
  }
  if( test_scalar_int_vector_float_addition() ) {
    std::cout << "test_scalar_int_vector_float_addition -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_int_vector_float_addition -> FAIL" << std::endl;
  }
  // Test vector + vector operators
  if( test_vector_int_vector_int_addition() ) {
    std::cout << "test_vector_int_vector_int_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_vector_int_addition -> FAIL" << std::endl;
  }
  if( test_vector_float_vector_float_addition() ) {
    std::cout << "test_vector_float_vector_float_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_float_vector_float_addition -> FAIL" << std::endl;
  }
  if( test_vector_double_vector_double_addition() ) {
    std::cout << "test_vector_double_vector_double_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_double_vector_double_addition -> FAIL" << std::endl;
  }
  if( test_vector_short_vector_short_addition() ) {
    std::cout << "test_vector_short_vector_short_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_short_vector_short_addition -> FAIL" << std::endl;
  }
  if( test_vector_long_vector_long_addition() ) {
    std::cout << "test_vector_long_vector_long_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_long_vector_long_addition -> FAIL" << std::endl;
  }
  if( test_vector_int_vector_float_addition() ) {
    std::cout << "test_vector_int_vector_float_addition -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_vector_float_addition -> FAIL" << std::endl;
  }
  // Test vector += scalar operators
  if( test_vector_int_scalar_int_compound_addition_assignment() ) {
    std::cout << "test_vector_int_scalar_int_compound_addition_assignment -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_scalar_int_compound_addition_assignment -> FAIL" << std::endl;
  }
  if( test_vector_int_vector_int_compound_addition_assignment() ) {
    std::cout << "test_vector_int_vector_int_compound_addition_assignment -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_vector_int_compound_addition_assignment -> FAIL" << std::endl;
  }
  // Test vector - scalar operators
  if( test_vector_int_scalar_int_subtraction() ) {
    std::cout << "test_vector_int_scalar_int_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_scalar_int_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_float_scalar_float_subtraction() ) {
    std::cout << "test_vector_float_scalar_float_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_float_scalar_float_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_double_scalar_double_subtraction() ) {
    std::cout << "test_vector_double_scalar_double_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_double_scalar_double_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_short_scalar_short_subtraction() ) {
    std::cout << "test_vector_short_scalar_short_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_short_scalar_short_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_long_scalar_long_subtraction() ) {
    std::cout << "test_vector_long_scalar_long_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_long_scalar_long_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_int_scalar_float_subtraction() ) {
    std::cout << "test_vector_int_scalar_float_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_scalar_float_subtraction -> FAIL" << std::endl;
  }
  // Test scalar - vector operators
  if( test_scalar_int_vector_int_subtraction() ) {
    std::cout << "test_scalar_int_vector_int_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_int_vector_int_subtraction -> FAIL" << std::endl;
  }
  if( test_scalar_float_vector_float_subtraction() ) {
    std::cout << "test_scalar_float_vector_float_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_float_vector_float_subtraction -> FAIL" << std::endl;
  }
  if( test_scalar_double_vector_double_subtraction() ) {
    std::cout << "test_scalar_double_vector_double_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_double_vector_double_subtraction -> FAIL" << std::endl;
  }
  if( test_scalar_short_vector_short_subtraction() ) {
    std::cout << "test_scalar_short_vector_short_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_short_vector_short_subtraction -> FAIL" << std::endl;
  }
  if( test_scalar_long_vector_long_subtraction() ) {
    std::cout << "test_scalar_long_vector_long_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_long_vector_long_subtraction -> FAIL" << std::endl;
  }
  if( test_scalar_int_vector_float_subtraction() ) {
    std::cout << "test_scalar_int_vector_float_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_scalar_int_vector_float_subtraction -> FAIL" << std::endl;
  }
  // Test vector - vector operators
  if( test_vector_int_vector_int_subtraction() ) {
    std::cout << "test_vector_int_vector_int_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_vector_int_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_float_vector_float_subtraction() ) {
    std::cout << "test_vector_float_vector_float_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_float_vector_float_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_double_vector_double_subtraction() ) {
    std::cout << "test_vector_double_vector_double_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_double_vector_double_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_short_vector_short_subtraction() ) {
    std::cout << "test_vector_short_vector_short_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_short_vector_short_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_long_vector_long_subtraction() ) {
    std::cout << "test_vector_long_vector_long_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_long_vector_long_subtraction -> FAIL" << std::endl;
  }
  if( test_vector_int_vector_float_subtraction() ) {
    std::cout << "test_vector_int_vector_float_subtraction -> OK" << std::endl;
  } else {
    std::cout << "test_vector_int_vector_float_subtraction -> FAIL" << std::endl;
  }
  // Test equal/not-equal operators
  if( test_vector_equal_operator() ) {
    std::cout << "test_vector_equal_operator -> OK" << std::endl;
  } else {
    std::cout << "test_vector_equal_operator -> FAIL" << std::endl;
  }
  if( test_vector_not_equal_operator() ) {
    std::cout << "test_vector_not_equal_operator -> OK" << std::endl;
  } else {
    std::cout << "test_vector_not_equal_operator -> FAIL" << std::endl;
  }
  return 0;
}

