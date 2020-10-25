
// https://leetcode.com/problems/missing-number/

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expected_sum = nums.size() * (nums.size()+1) / 2;
        int actual_sum = 0;
        for (int i=0; i<nums.size(); i++){
            actual_sum += nums[i];
        }
        return expected_sum - actual_sum;
    }
};

