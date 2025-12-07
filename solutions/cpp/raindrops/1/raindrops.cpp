#include "raindrops.h"
#include <string>
using namespace std;
namespace raindrops {
//string output[100];
string convert(int n)
{
    string output = "";
    if (((n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0))) 
    {
        output = to_string(n);
        return output;
    }
    if ((n % 3) == 0) 
    {
        output = output+"Pling";
    }
    if ((n % 5) == 0) 
    {
        output = output+"Plang";
    } 
    if ((n % 7) == 0) 
    {
        output = output+"Plong";
    }
    return output;
}
}  // namespace raindrops
