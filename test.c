#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // returnSize = (int*)malloc(2*sizeof(int));
    int i,j;
    for(i = 0, j=i+1; i<numsSize - 1 && numsSize; i++, j++){
        if(target == nums[i] + nums[j]){
            returnSize[0] = i;
            returnSize[1] = j;
        }
    }

    return returnSize;
}

int main(){
    int nums[4] = {2,7,11,15};
    int* returnsize;
    returnsize = twoSum(nums,4,9,returnsize);
    printf("%d %d", *returnsize, *(returnsize+1));
}