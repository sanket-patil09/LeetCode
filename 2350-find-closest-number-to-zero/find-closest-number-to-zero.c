int findClosestNumber(int* nums, int numsSize) {
    if (numsSize == 0) 
    {
        return 0;  
    }

    int closest = nums[0];  

    for (int i = 1; i < numsSize; i++) 
    {
        
        if (abs(nums[i]) < abs(closest)) {
            closest = nums[i];
        } 
        
        else if (abs(nums[i]) == abs(closest) && nums[i] > closest) {
            closest = nums[i];
        }
    }

    return closest;
}