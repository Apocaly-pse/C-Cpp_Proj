/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution
{
public:
    bool isHappy(int n)
    {
        int ret = 0;
        while (n != 1)
        {
            do
            {
                ret += (n % 10) * (n % 10);
                n /= 10;
            } while (n > 0);
            n = ret;
            if (4 == n)
                break;
            ret = 0;
        }
        return n == 1;
    }
};
// @lc code=end
