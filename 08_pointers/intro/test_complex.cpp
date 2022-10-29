#include <doctest.h>
#include <complex.h>

TEST_CASE("sum of complex numbers")
{
  auto c1 = Complex(1, 0);
  auto c2 = Complex(2, 0);
  auto c3 = Complex(3, 0);
  CHECK_EQ(c1+c2, c3);
}