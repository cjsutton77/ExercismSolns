#include "pangram.h"
using namespace std;
namespace pangram {

bool is_pangram(string sent)
{
    char holder[100];
    bool alpha[26]  = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    if (sent == "") return false;
    else
    {
        int j = 0;
        for (int i = 0 ; i < (int)sent.size(); i++)
        {  
            //cout << sent[i];
            if (std::isalpha(sent[i])) 
            {
                holder[j] = std::tolower(sent[i]);
                alpha[(int)holder[j] - 97] = true;
                ++j;
            }
            else continue;
        }
        holder[j] = '\0';
    }

    int sum = 0;
    for (int i = 0; i < 26; i++)
        {
            if (alpha[i] == true) ++sum;
            else continue;
        }
   if (sum >= 26) return true;
    else return false;
}
}  // nce pangram
