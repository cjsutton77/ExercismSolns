#include "luhn.h"


namespace luhn {
bool valid(std::string number)
{
    reverse(number.begin(),number.end());
    //std::cout << number << std::endl;
    std::string new_number = "";
    if (number.size() == 1) return false;
    else
    {
        for(std::string::size_type i = 0; i < number.size(); ++i) 
        {
            if (number[i] == ' ') continue;
            else if (std::isdigit(number[i]) == false) return false;
            else new_number = new_number + number[i];
        }
        if (new_number.size() == 1) return false;
        int value = 0;
        int n = 0;
        for(std::string::size_type i = 0; i < new_number.size(); ++i) 
        {
            n = ((int)new_number[i]-48);
            if ((i+1)%2 == 0)
            {
                
                n = 2 * n;
                
                if (n > 9) n = n-9;
                else n = n * 1;
                //std::cout << n << std::endl;
            }
            else n = n * 1;
            value = value + n;

        }

        return !(value%10);
    }

}
}


