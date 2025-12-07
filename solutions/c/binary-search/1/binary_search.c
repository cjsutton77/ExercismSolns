#include "binary_search.h"

const int* binary_search(int value, const int arr[], size_t length)
{
    if (length == 1) return arr;
    else
    {
        size_t low = 0;
        size_t high = length;
        size_t mid = length;
        if (value < arr[0]) return NULL;
        if (value > arr[length-1]) return NULL;
        if (length == 0) return NULL;
        while (arr[mid] != value)
        {
          //printf("%zu\t%zu\t%zu\t%d\n",low,mid,high,value);
          mid = low + (high - low) / 2;
          if (arr[low] == value)
          {
            mid = low;
            return arr+(int)low;
          }
          else if (arr[high] == value)
          {
            mid = high;
            return arr+(int)high;
          }
          else if (mid == low)
          {
            return NULL;
          }
          else if (arr[mid] > value)
          {
            high = mid - 1;
          }
          else if (arr[mid] < value)
          {
            low = mid + 1;
          }
          //else continue;

        }
        return arr + (int)mid;
    }
}
