/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ret=0, ans=0;
        for (int i=0;i<n;i++)
        {
            ret+=nums[i];
            ans+=i+1;
        }
        return ans-ret;
    }
};
// @lc code=end

