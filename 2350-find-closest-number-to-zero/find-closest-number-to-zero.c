int findClosestNumber(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;  // Return 0 if array is empty
    }

    int closest = nums[0];  // Assume the first element is the closest initially

    for (int i = 1; i < numsSize; i++) {
        // If current number is closer to zero, update closest
        if (abs(nums[i]) < abs(closest)) {
            closest = nums[i];
        } 
        // If the absolute values are the same, choose the positive number
        else if (abs(nums[i]) == abs(closest) && nums[i] > closest) {
            closest = nums[i];
        }
    }

    return closest;
}