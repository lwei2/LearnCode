/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int* ptr;

    ptr = (int*) malloc(2 * sizeof(int));  //memory allocated using malloc
    
    while(i < numsSize){
        while(j < numsSize){
            if(j != i){
                if((nums[i] + nums[j]) == target){
                    *ptr = i;
                    *(ptr+1)=j;
                    return ptr;
                }
            }
            j++;
        }
        i++;
        j = 0;
    }
    return ptr;
}

int main(void)
{
	return 0;
}
