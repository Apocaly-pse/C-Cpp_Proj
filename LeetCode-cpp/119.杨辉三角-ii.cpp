/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        // 本质还是数学
        vector<int> arr(rowIndex + 1);
        arr[0] = 1;
        for (int i = 1; i <= rowIndex; i++)
        {
            arr[i] = 1LL * arr[i - 1] * (rowIndex - i + 1) / i;
        }
        return arr;
    }
};
// @lc code=end
