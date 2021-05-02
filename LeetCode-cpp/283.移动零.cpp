/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int flag = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0 && i < nums.size() - flag)
            {
                flag += 1;
                for (int j = i; j < nums.size() - flag; j++)
                {
                    nums[j] = nums[j + 1];
                }
                nums[nums.size() - flag] = 0;
            }
        }
        if (nums[0] == 0)
        {
            for (int i = 0; i < nums.size() - 1; i++)
                nums[i] = nums[i + 1];
            nums.back() = 0;

        }
    }
};
// @lc code=end
