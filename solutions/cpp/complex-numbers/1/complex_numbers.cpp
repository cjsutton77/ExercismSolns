#include "complex_numbers.h"

namespace complex_numbers {

Complex operator+(double const& lhs, Complex const& rhs){
    //Complex temp;
    return Complex{lhs,0} + rhs;
}

Complex operator-(double const& lhs, Complex const& rhs){
      return Complex{lhs,0} - rhs;
}

Complex operator*(double const& lhs, Complex const& rhs){
      return Complex{lhs,0} * rhs;
}

Complex operator/(double const& lhs, Complex const& rhs){
      return Complex{lhs,0} / rhs;
}
}  // namespace complex_numbers
