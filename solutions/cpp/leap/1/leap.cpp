#include "leap.h"
using namespace std;



namespace leap {

bool is_leap_year(int);
bool is_div(int,int,bool);


bool is_div(int interval,int year)
{
    if (year % interval == 0) return true;
    else return false;
}

bool is_leap_year(int year)
{
    if (is_div(400,year)) return true;
    else if (is_div(4,year) && !is_div(100,year)) return true;
    else return false;
}

}  // namespace leap
