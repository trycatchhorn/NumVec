#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include "../include/vector.h"

// Empty constructor
void test_vector_empty_constructor() {
  // Create empty vector
  Vector<int> v;
  std::cout << v << std::endl;
}

void test_vector_initializer_constructor() {
  // Create vector containing elements
  Vector<int> v({ 1, 2, 3 });
  std::cout << v << std::endl;
}

// vector + scalar (vector int and scalar int)
void test_vector_int_scalar_int_addition() {
  // Create vector
  Vector<int> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // Create scalar
  int s = 2;
  // vector * scalar
  Vector<int> res = v + s;
  std::cout << "res = v + s = " << v << " + " << s << " = " << res << std::endl;
}

// vector + scalar (vector float and scalar float)
void test_vector_float_scalar_float_addition() {
  // Create vector
  Vector<float> v;
  v.insert( 1.1f );
  v.insert( 2.1f );
  v.insert( 3.1f );
  // Create scalar
  float s = 2.1f;
  // vector + scalar
  Vector<float> res = v + s;
  std::cout << "res = v + s = " << v << " + " << s << " = " << res << std::endl;
}

// vector + scalar (vector double and scalar double)
void test_vector_double_scalar_double_addition() {
  // Create vector
  Vector<double> v;
  v.insert( 1.1 );
  v.insert( 2.1 );
  v.insert( 3.1 );
  // Create scalar
  double s = 2.1;
  // vector + scalar
  Vector<double> res = v + s;
  std::cout << "res = v + s = " << v << " + " << s << " = " << res << std::endl;
}

// vector + scalar (vector short and scalar short)
void test_vector_short_scalar_short_addition() {
  // Create vector
  Vector<short> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // Create scalar
  short s = 2;
  // vector + scalar
  Vector<short> res = v + s;
  std::cout << "res = v + s = " << v << " + " << s << " = " << res << std::endl;
}

// vector + scalar (vector long and scalar long)
void test_vector_long_scalar_long_addition() {
  // Create vector
  Vector<long> v;
  v.insert( 10000000000L );
  v.insert( 20000000000L );
  v.insert( 30000000000L );
  // Create scalar
  long s = 20000000000L;
  // vector + scalar
  Vector<long> res = v + s;
  std::cout << "res = v + s = " << v << " + " << s << " = " << res << std::endl;
}

// vector + scalar (vector int and scalar float)
void test_vector_int_scalar_float_addition() {
  // Create vector
  Vector<int> v;
  v.insert( 1);
  v.insert( 2 );
  v.insert( 3 );
  // Create scalar
  float s = 2.1f;
  // vector + scalar
  Vector<float> res = v + s;
  std::cout << "res = v + s = " << v << " + " << s << " = " << res << std::endl;
}

// scalar + vector (scalar int and vector int)
void test_scalar_int_vector_int_addition() {
  // Create scalar
  int s = 2;
  // Create vector
  Vector<int> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // scalar + vector
  Vector<int> res = s + v;
  std::cout << "res = s + v = " << s << " + " << v << " = " << res << std::endl;
}

// scalar + vector (scalar float and vector float)
void test_scalar_float_vector_float_addition() {
  // Create scalar
  float s = 2.1f;
  // Create vector
  Vector<float> v;
  v.insert( 1.1f );
  v.insert( 2.1f );
  v.insert( 3.1f );
  // scalar + vector
  Vector<float> res = s + v;
  std::cout << "res = s + v = " << s << " + " << v << " = " << res << std::endl;
}

// scalar + vector (scalar double and vector double)
void test_scalar_double_vector_double_addition() {
  // Create scalar
  double s = 2.1;
  // Create vector
  Vector<double> v;
  v.insert( 1.1 );
  v.insert( 2.1 );
  v.insert( 3.1 );
  // scalar + vector
  Vector<double> res = s + v;
  std::cout << "res = s + v = " << s << " + " << v << " = " << res << std::endl;
}

// scalar + vector (scalar short and vector short)
void test_scalar_short_vector_short_addition() {
  // Create scalar
  short s = 2;
  // Create vector
  Vector<short> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // scalar + vector
  Vector<short> res = s + v;
  std::cout << "res = s + v = " << s << " + " << v << " = " << res << std::endl;
}

// scalar + vector (scalar long and vector long)
void test_scalar_long_vector_long_addition() {
  // Create scalar
  long s = 20000000000L;
  // Create vector
  Vector<long> v;
  v.insert( 10000000000L );
  v.insert( 20000000000L );
  v.insert( 30000000000L );
  // scalar + vector
  Vector<long> res = s + v;
  std::cout << "res = s + v = " << s << " + " << v << " = " << res << std::endl;
}

// scalar + vector (scalar int and vector float)
void test_scalar_int_vector_float_addition() {
  // Create scalar
  float s = 2.1f;
  // Create vector
  Vector<int> v;
  v.insert( 1);
  v.insert( 2 );
  v.insert( 3 );
  // scalar + vector
  Vector<float> res = s + v;
  std::cout << "res = s + v = " << s << " + " << v << " = " << res << std::endl;
}

// vector + vector (vector int and vector int)
void test_vector_int_vector_int_addition() {
  // Create vector v1
  Vector<int> v1;
  v1.insert( 1 );
  v1.insert( 3 );
  v1.insert( 5 );
  // Create vector v2
  Vector<int> v2;
  v2.insert( 2 );
  v2.insert( 4 );
  v2.insert( 6 );
  // vector + vector
  Vector<int> res = v1 + v2;
  std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << std::endl;
}

// vector + vector (vector float and vector float)
void test_vector_float_vector_float_addition() {
  // Create vector v1
  Vector<float> v1;
  v1.insert( 1.1f );
  v1.insert( 3.1f );
  v1.insert( 5.1f );
  // Create vector v2
  Vector<float> v2;
  v2.insert( 2.1f );
  v2.insert( 4.1f );
  v2.insert( 6.1f );
  // vector + vector
  Vector<float> res = v1 + v2;
  std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << std::endl;
}

// vector + vector (vector double and vector double)
void test_vector_double_vector_double_addition() {
  // Create vector v1
  Vector<double> v1;
  v1.insert( 1.1 );
  v1.insert( 3.1 );
  v1.insert( 5.1 );
  // Create vector v2
  Vector<double> v2;
  v2.insert( 2.1 );
  v2.insert( 4.1 );
  v2.insert( 6.1 );
  // vector + vector
  Vector<double> res = v1 + v2;
  std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << std::endl;
}

// vector + vector (vector short and vector short)
void test_vector_short_vector_short_addition() {
  // Create vector v1
  Vector<short> v1;
  v1.insert( 1 );
  v1.insert( 3 );
  v1.insert( 5 );
  // Create vector v2
  Vector<short> v2;
  v2.insert( 2 );
  v2.insert( 4 );
  v2.insert( 6 );
  // vector + vector
  Vector<short> res = v1 + v2;
  std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << std::endl;
}

// vector + vector (vector long and vector long)
void test_vector_long_vector_long_addition() {
  // Create vector v1
  Vector<long> v1;
  v1.insert( 10000000000L );
  v1.insert( 30000000000L );
  v1.insert( 50000000000L );
  // Create vector v2
  Vector<long> v2;
  v2.insert( 20000000000L );
  v2.insert( 40000000000L );
  v2.insert( 60000000000L );
  // vector + vector
  Vector<long> res = v1 + v2;
  std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << std::endl;
}

// vector + vector (vector int and vector float)
void test_vector_int_vector_float_addition() {
  // Create vector v1
  Vector<int> v1;
  v1.insert( 1 );
  v1.insert( 3 );
  v1.insert( 5 );
  // Create vector v2
  Vector<float> v2;
  v2.insert( 2.1f );
  v2.insert( 4.1f );
  v2.insert( 6.1f );
  // vector + vector
  Vector<float> res = v1 + v2;
  std::cout << "res = v1 + v2 = " << v1 << " + " << v2 << " = " << res << std::endl;
}

// vector - scalar (vector int and scalar int)
void test_vector_int_scalar_int_subtraction() {
  // Create vector
  Vector<int> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // Create scalar
  int s = 2;
  // vector - scalar
  Vector<int> res = v - s;
  std::cout << "res = v - s = " << v << " - " << s << " = " << res << std::endl;
}

// vector - scalar (vector float and scalar float)
void test_vector_float_scalar_float_subtraction() {
  // Create vector
  Vector<float> v;
  v.insert( 1.1f );
  v.insert( 2.1f );
  v.insert( 3.1f );
  // Create scalar
  float s = 2.1f;
  // vector - scalar
  Vector<float> res = v - s;
  std::cout << "res = v - s = " << v << " - " << s << " = " << res << std::endl;
}

// vector - scalar (vector double and scalar double)
void test_vector_double_scalar_double_subtraction() {
  // Create vector
  Vector<double> v;
  v.insert( 1.1 );
  v.insert( 2.1 );
  v.insert( 3.1 );
  // Create scalar
  double s = 2.1;
  // vector - scalar
  Vector<double> res = v - s;
  std::cout << "res = v - s = " << v << " - " << s << " = " << res << std::endl;
}

// vector - scalar (vector short and scalar short)
void test_vector_short_scalar_short_subtraction() {
  // Create vector
  Vector<short> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // Create scalar
  short s = 2;
  // vector - scalar
  Vector<short> res = v - s;
  std::cout << "res = v - s = " << v << " - " << s << " = " << res << std::endl;
}

// vector - scalar (vector long and scalar long)
void test_vector_long_scalar_long_subtraction() {
  // Create vector
  Vector<long> v;
  v.insert( 10000000000L );
  v.insert( 20000000000L );
  v.insert( 30000000000L );
  // Create scalar
  long s = 20000000000L;
  // vector - scalar
  Vector<long> res = v - s;
  std::cout << "res = v - s = " << v << " - " << s << " = " << res << std::endl;
}

// vector - scalar (vector int and scalar float)
void test_vector_int_scalar_float_subtraction() {
  // Create vector
  Vector<int> v;
  v.insert( 1);
  v.insert( 2 );
  v.insert( 3 );
  // Create scalar
  float s = 2.1f;
  // vector - scalar
  Vector<float> res = v - s;
  std::cout << "res = v - s = " << v << " - " << s << " = " << res << std::endl;
}

// scalar - vector (scalar int and vector int)
void test_scalar_int_vector_int_subtraction() {
  // Create scalar
  int s = 2;
  // Create vector
  Vector<int> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // scalar - vector
  Vector<int> res = s - v;
  std::cout << "res = s - v = " << s << " - " << v << " = " << res << std::endl;
}

// scalar - vector (scalar float and vector float)
void test_scalar_float_vector_float_subtraction() {
  // Create scalar
  float s = 2.1f;
  // Create vector
  Vector<float> v;
  v.insert( 1.1f );
  v.insert( 2.1f );
  v.insert( 3.1f );
  // scalar - vector
  Vector<float> res = s - v;
  std::cout << "res = s - v = " << s << " - " << v << " = " << res << std::endl;
}

// scalar - vector (scalar double and vector double)
void test_scalar_double_vector_double_subtraction() {
  // Create scalar
  double s = 2.1;
  // Create vector
  Vector<double> v;
  v.insert( 1.1 );
  v.insert( 2.1 );
  v.insert( 3.1 );
  // scalar - vector
  Vector<double> res = s - v;
  std::cout << "res = s - v = " << s << " - " << v << " = " << res << std::endl;
}

// scalar - vector (scalar short and vector short)
void test_scalar_short_vector_short_subtraction() {
  // Create scalar
  short s = 2;
  // Create vector
  Vector<short> v;
  v.insert( 1 );
  v.insert( 2 );
  v.insert( 3 );
  // scalar - vector
  Vector<short> res = s - v;
  std::cout << "res = s - v = " << s << " - " << v << " = " << res << std::endl;
}

// scalar - vector (scalar long and vector long)
void test_scalar_long_vector_long_subtraction() {
  // Create scalar
  long s = 20000000000L;
  // Create vector
  Vector<long> v;
  v.insert( 10000000000L );
  v.insert( 20000000000L );
  v.insert( 30000000000L );
  // scalar - vector
  Vector<long> res = s - v;
  std::cout << "res = s - v = " << s << " - " << v << " = " << res << std::endl;
}

// scalar - vector (scalar int and vector float)
void test_scalar_int_vector_float_subtraction() {
  // Create scalar
  float s = 2.1f;
  // Create vector
  Vector<int> v;
  v.insert( 1);
  v.insert( 2 );
  v.insert( 3 );
  // scalar - vector
  Vector<float> res = s - v;
  std::cout << "res = s - v = " << s << " - " << v << " = " << res << std::endl;
}

// vector - vector (vector int and vector int)
void test_vector_int_vector_int_subtraction() {
  // Create vector v1
  Vector<int> v1;
  v1.insert( 1 );
  v1.insert( 3 );
  v1.insert( 5 );
  // Create vector v2
  Vector<int> v2;
  v2.insert( 2 );
  v2.insert( 4 );
  v2.insert( 6 );
  // vector - vector
  Vector<int> res = v1 - v2;
  std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << std::endl;
}

// vector - vector (vector float and vector float)
void test_vector_float_vector_float_subtraction() {
  // Create vector v1
  Vector<float> v1;
  v1.insert( 1.1f );
  v1.insert( 3.1f );
  v1.insert( 5.1f );
  // Create vector v2
  Vector<float> v2;
  v2.insert( 2.1f );
  v2.insert( 4.1f );
  v2.insert( 6.1f );
  // vector - vector
  Vector<float> res = v1 - v2;
  std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << std::endl;
}

// vector - vector (vector double and vector double)
void test_vector_double_vector_double_subtraction() {
  // Create vector v1
  Vector<double> v1;
  v1.insert( 1.1 );
  v1.insert( 3.1 );
  v1.insert( 5.1 );
  // Create vector v2
  Vector<double> v2;
  v2.insert( 2.1 );
  v2.insert( 4.1 );
  v2.insert( 6.1 );
  // vector + vector
  Vector<double> res = v1 - v2;
  std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << std::endl;
}

// vector - vector (vector short and vector short)
void test_vector_short_vector_short_subtraction() {
  // Create vector v1
  Vector<short> v1;
  v1.insert( 1 );
  v1.insert( 3 );
  v1.insert( 5 );
  // Create vector v2
  Vector<short> v2;
  v2.insert( 2 );
  v2.insert( 4 );
  v2.insert( 6 );
  // vector - vector
  Vector<short> res = v1 - v2;
  std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << std::endl;
}

// vector - vector (vector long and vector long)
void test_vector_long_vector_long_subtraction() {
  // Create vector v1
  Vector<long> v1;
  v1.insert( 10000000000L );
  v1.insert( 30000000000L );
  v1.insert( 50000000000L );
  // Create vector v2
  Vector<long> v2;
  v2.insert( 20000000000L );
  v2.insert( 40000000000L );
  v2.insert( 60000000000L );
  // vector - vector
  Vector<long> res = v1 - v2;
  std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << std::endl;
}

// vector - vector (vector int and vector float)
void test_vector_int_vector_float_subtraction() {
  // Create vector v1
  Vector<int> v1;
  v1.insert( 1 );
  v1.insert( 3 );
  v1.insert( 5 );
  // Create vector v2
  Vector<float> v2;
  v2.insert( 2.1f );
  v2.insert( 4.1f );
  v2.insert( 6.1f );
  // vector - vector
  Vector<float> res = v1 - v2;
  std::cout << "res = v1 - v2 = " << v1 << " - " << v2 << " = " << res << std::endl;
}

// vector equal operator
void test_vector_equal_operator() {
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
  std::cout << "res = v1 == v2 = " << v1 << " == " << v2 << " = " << res << std::endl;
}

// vector not equal operator
void test_vector_not_equal_operator() {
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
  // v1 == v2
  bool res = v1 != v2;
  std::cout << "res = v1 != v2 = " << v1 << " != " << v2 << " = " << res << std::endl;
}

int main() {
  // Test vector constructors
  test_vector_empty_constructor();
  test_vector_initializer_constructor();

  // Test vector + scalar operators
  test_vector_int_scalar_int_addition();
  test_vector_float_scalar_float_addition();
  test_vector_double_scalar_double_addition();
  test_vector_short_scalar_short_addition();
  test_vector_long_scalar_long_addition();
  test_vector_int_scalar_float_addition();

  // Test scalar + vector operators
  test_scalar_int_vector_int_addition();
  test_scalar_float_vector_float_addition();
  test_scalar_double_vector_double_addition();
  test_scalar_short_vector_short_addition();
  test_scalar_long_vector_long_addition();
  test_scalar_int_vector_float_addition();

  // Test vector + vector operators
  test_vector_int_vector_int_addition();
  test_vector_float_vector_float_addition();
  test_vector_double_vector_double_addition();
  test_vector_short_vector_short_addition();
  test_vector_long_vector_long_addition();
  test_vector_int_vector_float_addition();

  // Test vector - scalar operators
  test_vector_int_scalar_int_subtraction();
  test_vector_float_scalar_float_subtraction();
  test_vector_double_scalar_double_subtraction();
  test_vector_short_scalar_short_subtraction();
  test_vector_long_scalar_long_subtraction();
  test_vector_int_scalar_float_subtraction();

  // Test scalar - vector operators
  test_scalar_int_vector_int_subtraction();
  test_scalar_float_vector_float_subtraction();
  test_scalar_double_vector_double_subtraction();
  test_scalar_short_vector_short_subtraction();
  test_scalar_long_vector_long_subtraction();
  test_scalar_int_vector_float_subtraction();

  // Test vector - vector operators
  test_vector_int_vector_int_subtraction();
  test_vector_float_vector_float_subtraction();
  test_vector_double_vector_double_subtraction();
  test_vector_short_vector_short_subtraction();
  test_vector_long_vector_long_subtraction();
  test_vector_int_vector_float_subtraction();

  // Test equal/not-equal operators
  test_vector_equal_operator();
  test_vector_not_equal_operator();
  return 0;
}

