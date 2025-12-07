#include "raindrops.h"

char *convert(char result[], int drops)
{
    bool cond1 = (drops % 3 == 0);
    bool cond2 = (drops % 5 == 0);
    bool cond3 = (drops % 7 == 0);
    if (cond1)
        strcat(result, "Pling");
    if (cond2)
        strcat(result, "Plang");
    if (cond3)
        strcat(result, "Plong");
    if (!cond1 && !cond2 && !cond3)
        sprintf(result, "%d", drops);
    return result;
        
    
}