#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H
#include <cmath>

namespace complex_numbers {
/**
 * @brief Complex number class
 *
 * This class represents a complex number and provides methods for
 * performing arithmetic operations on complex numbers.
 */
class Complex
{
private:
   double re; /**< real component */
   double im; /**< imaginary component */
public:
   /**
    * @brief Constructor
    *
    * Default constructor, initializes complex number to 0 + 0i.
    */
   Complex() : re{0}, im{0} {}

   /**
    * @brief Constructor
    *
    * Initializes complex number with given real and imaginary components.
    *
    * @param r real component
    * @param i imaginary component
    */
   Complex(double r, double i) : re{r}, im{i} {}

   /**
    * @brief Get real component
    *
    * @return real component
    */
   double real() const {return re;}

   /**
    * @brief Get imaginary component
    *
    * @return imaginary component
    */
   double imag() const {return im;}

   /**
    * @brief Get complex conjugate
    *
    * @return complex conjugate
    */
   Complex conj() const {
      return Complex(re, -im);
   }

   /**
    * @brief Calculate complex exponential
    *
    * @return complex exponential
    */
   Complex exp() const {
      return Complex(std::exp(re) * std::cos(im), std::exp(re) * std::sin(im));
   }

   /**
    * @brief Calculate absolute value
    *
    * @return absolute value
    */
   double abs() const {
      return std::sqrt(re * re + im * im);
   }

   /**
    * @brief Add two complex numbers
    *
    * @param obj complex number to add
    * @return result of addition
    */
   Complex operator+(Complex const& obj) const {
      return Complex{re + obj.re,im + obj.im};
   }

   /**
    * @brief Add complex number and double
    *
    * @param num double to add
    * @return result of addition
    */
   Complex operator+(double const& num) const {
      return Complex{re + num,im};
   }

   /**
    * @brief Subtract two complex numbers
    *
    * @param obj complex number to subtract
    * @return result of subtraction
    */
   Complex operator-(Complex const& obj) const {
      return Complex{re - obj.re,im - obj.im};
   }

   /**
    * @brief Subtract double from complex number
    *
    * @param num double to subtract
    * @return result of subtraction
    */
   Complex operator-(double const& num) const {
      return Complex{re - num,im};
   }

   /**
    * @brief Multiply two complex numbers
    *
    * @param obj complex number to multiply
    * @return result of multiplication
    */
   Complex operator*(Complex const& obj) const {
      return Complex{re * obj.re - im * obj.im, im * obj.re + re * obj.im};
   }

   /**
    * @brief Multiply complex number and double
    *
    * @param num double to multiply
    * @return result of multiplication
    */
   Complex operator*(double const& num) const {
      return Complex{re * num, im * num};
   }

   /**
    * @brief Divide two complex numbers
    *
    * @param obj complex number to divide
    * @return result of division
    */
   Complex operator/(Complex const& obj) const {
      double denom = obj.re * obj.re + obj.im * obj.im;
      return Complex{(re * obj.re + im * obj.im) / denom,(im * obj.re - re * obj.im) / denom};
   }

   /**
    * @brief Divide complex number by double
    *
    * @param num double to divide
    * @return result of division
    */
   Complex operator/(double const& num) const {
      return Complex{re / num, im/ num};
   }

};

/**
 * @brief Add double to complex number
 *
 * @param lhs double to add
 * @param rhs complex number to add
 * @return result of addition
 */
Complex operator+(double const& lhs, Complex const& rhs);

/**
 * @brief Subtract complex number from double
 *
 * @param lhs double to subtract from
 * @param rhs complex number to subtract
 * @return result of subtraction
 */
Complex operator-(double const& lhs, Complex const& rhs);

/**
 * @brief Multiply double by complex number
 *
 * @param lhs double to multiply
 * @param rhs complex number to multiply
 * @return result of multiplication
 */
Complex operator*(double const& lhs, Complex const& rhs);

/**
 * @brief Divide double by complex number
 *
 * @param lhs double to divide
 * @param rhs complex number to divide
 * @return result of division
 */
Complex operator/(double const& lhs, Complex const& rhs);
} // namespace complex_numbers
#endif  // COMPLEX_NUMBERS_H

