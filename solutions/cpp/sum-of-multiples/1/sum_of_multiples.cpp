#include "sum_of_multiples.h"

namespace sum_of_multiples {

int sum(std::vector<int> arr)
{
    int setsum = 0;
    std::set<int> s( arr.begin(), arr.end() );
    arr.assign( s.begin(), s.end() );
    for (int element:arr) setsum += element;
    return setsum;
}

int to(std::vector<int> arr,int num)
{
    std::vector<int> holder;
    long value = 0;
    if (arr.empty()) return value;
    else if (num == 0) return value;
    else
    {
        
        for(int vec:arr)
        {
            if (vec >= num) continue;
            else {};
            bool mod = num % vec == 0;
            int div = num / vec - mod;
            for (auto i = 1; i <= div; ++i)
            {
                holder.push_back((vec * i) * ((vec * i) < num));
            }
        }
    }
    value = sum(holder);
    return value;
}
}  // namespace sum_of_multiples
