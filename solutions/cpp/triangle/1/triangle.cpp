#include "triangle.h"

    bool triangle::is_triangle(double a, double b, double c)
    {
        if ((a+b+c) <= 0) return false;
        else {
        bool cond_c = ((a + b) >= c);
        bool cond_a = ((b + c) >= a);
        bool cond_b = ((a + c) >= b);
        bool cond_0 = ((a + b + c) > 0);
        return (cond_a && cond_b && cond_c && cond_0);
            }
    }

    triangle::flavor triangle::kind(double a,double b, double c)
    {
        if (triangle::is_triangle(a,b,c))
        {
            if (((a == b) && (a == c) && (b == c))) 
                return flavor::equilateral;
            else if (((a == b) || (a == c) || (b == c)))
                return flavor::isosceles;
            else if ((a != b) && (a != c) && (b != c))
                return flavor::scalene;
            else throw std::domain_error("no!");
        }
        else throw std::domain_error("no!");
    }


