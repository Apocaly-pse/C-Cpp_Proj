/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> arr;
        arr.resize(numRows); //N行
        for (int k = 0; k < numRows; ++k)
        {
            arr[k].resize(k + 1); //每行为k+1列
        }
        for (int i = 0; i < numRows; ++i)
        {
            arr[i][0] = 1;
            arr[i][i] = 1;
        }
        for (int i = 2; i < numRows; i++)
        {
            for (int j = 1; j < i; j++)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        return arr;
    }
};
// @lc code=end
