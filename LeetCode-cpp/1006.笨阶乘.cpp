/*
 * @lc app=leetcode.cn id=1006 lang=cpp
 *
 * [1006] 笨阶乘
 */

// @lc code=start
class Solution
{
public:
    int clumsy(int N)
    {
        int ret;
        if (N > 4)
        {
            ret = N * (N - 1) / (N - 2) + (N - 3);
            int mod = N % 4;
            for (int i = N - 4; i > mod; i -= 4)
            {
                ret -= i * (i - 1) / (i - 2);
                ret += (i - 3);
            }
            if (mod == 3)
                ret -= 6;
            else if (mod == 2)
                ret -= 2;
            else if (mod == 1)
                ret -= 1;
        }

        else if (N == 4)
            ret = 7;
        else if (N == 3)
            ret = 6;
        else if (N == 2)
            ret = 2;
        else
            ret = 1;
        return ret;
    }
};
// @lc code=end

