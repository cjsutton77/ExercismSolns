#include "high_scores.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int32_t comp(const void* first,const void* second){
    return (*(int *)second - *(int *)first);
}

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len-1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t max = 0;
    for (size_t i = 0; i < scores_len; i++){
        if (scores[i] > max) {
            max = scores[i];
        }
        else continue;
    }
    return max;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output){
    int32_t num = scores_len > 3 ? 3 : scores_len;
    int32_t* arr = (int32_t*)malloc(sizeof(int32_t) * scores_len);
    memcpy(arr, scores,sizeof(int32_t) * scores_len);
    qsort(arr,scores_len,sizeof(int32_t),comp);
    for (int32_t i = 0; i < num; i++){
        output[i] = arr[i];
    }
    free(arr);
    arr = NULL;
    return num;
}
