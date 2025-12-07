#include "sum_of_multiples.h"

unsigned int sum(const unsigned int *factors, 
    const size_t number_of_factors,
    const unsigned int limit) 
    {
        unsigned int arr[50000] = {0};
        //unsigned int temp;
        unsigned int count = 0;
        unsigned int summation = 0;
        unsigned int scaling;
        for (size_t i = 0; i < number_of_factors; i++){
            if (factors[i] == 0) break;
            scaling = limit / factors[i];
            //printf("scaling: %d\n",scaling);
            for (unsigned int j = 1; j <= scaling; j++){
                if (factors[i] * j == limit) break;
                arr[count] = factors[i] * j;
                //printf("== %d ",arr[count]);
                ++count;
            }
        }
        
        for (unsigned int m = 0; m < count; m++){
            for (unsigned int n = m + 1; n < count; n++){
                if (n == m) break;
                else if ((arr[m] == arr[n]) && arr[m] != 0){
                    //printf("%d %d\n",arr[m],arr[n]);
                    arr[n] = 0;
                }
                else continue;
            }
        }
        for (unsigned int x = 0; x < count; x++){
            //printf("----> %d\n",arr[x]);
            summation += arr[x];
        }
        //printf("--> %d %d\n",count,summation);
        return summation;
    }
