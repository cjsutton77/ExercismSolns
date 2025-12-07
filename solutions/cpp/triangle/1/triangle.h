#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include <string>
#include <stdexcept>
namespace triangle {

    enum  flavor 
    {   
        equilateral, isosceles, scalene, invalid = -1
    };

flavor kind(double a,double b, double c);

bool is_triangle(double a, double b, double c);

}  // namespace triangle


#endif // TRIANGLE_H