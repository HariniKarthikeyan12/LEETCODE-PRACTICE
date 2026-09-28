int differenceOfSum(int* nums, int numsSize) {
    int result = 0;
    int esum = 0;
    int dsum = 0;

    for(int i = 0 ;i<numsSize;i++)
    {
        esum += nums[i];
        int temp = nums[i];

        while(temp)
        {
            int u = (temp)%10;
            dsum += u;
            temp /= 10;
    }

    }

  
    result = abs(esum - dsum);

    return result;  
    
}