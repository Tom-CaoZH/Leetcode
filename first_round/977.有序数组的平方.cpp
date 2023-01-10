/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> result(nums.size(), 0);
        int index = nums.size() - 1;

        while(left <= right) {
            if(nums[right] * nums[right] >= nums[left] * nums[left]) {
                result[index] = nums[right] * nums[right];
                right--;
            }
            else {
                result[index] = nums[left] * nums[left];
                left++;
            }
            index--;
        }


        return result;
    }

};
// @lc code=end

