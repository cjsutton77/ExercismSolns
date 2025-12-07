#include "darts.h"

namespace darts {
    double assess(double r)
    {
        //  If the dart lands outside the target, player earns no points (0 points).
        // - If the dart lands in the outer circle of the target, player earns 1 point.
        // - If the dart lands in the middle circle of the target, player earns 5 points.
        // - If the dart lands in the inner circle of the target, player earns 10 points.

        // The outer circle has a radius of 10 units (this is equivalent to the total radius 
        // for the entire target), the middle circle a radius of 5 units, and the inner circle a radius of 1.

        if (r > 10.0) return 0;
        else if ((r <= 10.0) && (r > 5)) return 1;
        else if ((r <= 5.0) && (r > 1)) return 5;
        else return 10;
    }
    int score(double x, double y)
    {
        double r = sqrt(pow(x,2.0)+pow(y,2.0));
        return assess(r);
    }
} // namespace darts