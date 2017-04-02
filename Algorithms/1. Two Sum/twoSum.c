/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int *ans;
    
    ans = (int *)malloc(2*sizeof(int));
    
    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            if (j == i) 
                continue;
            if ((nums[i] + nums[j]) == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return NULL;
}