/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        int i = 0;
        int sum = 0;
        int SubLen = 0;
        int size = nums.size();
        for(int j = 0;j < size; ++j) {
            sum += nums[j];
            while(sum >= target) {
                SubLen = j - i + 1;
                result = min(SubLen, result);
                sum -= nums[i];
                i++;
            }
        }

        if(result == INT_MAX) {
            return 0;
        }
        return result;
    }
};
// @lc code=end

