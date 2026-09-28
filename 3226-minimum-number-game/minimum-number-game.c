/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* nums, int numsSize, int* returnSize) {
    int *arr = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for(int i = 0;i<numsSize;i++)
    {
        for(int j = i+1;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    int i = 0;
    for(int k = 0;k<numsSize;k=k+2)
    {
        arr[k] = nums[i+1];
        arr[k+1]= nums[i];
        i = i+2;
    }

    return arr;
}