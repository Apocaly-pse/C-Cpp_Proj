/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        // 方法一:直接遍历法
        // if (n == 0)
        // {
        //     return false;
        // }
        // /*
        // 思路:
        // 如果n=0,返回False,
        // 接下来进行遍历,
        // 判断n%3==0,是则n/=3,直到恰好整除尽,说明是3的幂
        // */
        // while (n != 1)
        // {
        //     if (n % 3 == 0)
        //         n /= 3;
        //     else
        //         return false;
        // }
        // return true;
        // 方法二: 不使用循环,从数字范围考虑!巧妙
        return n > 0 && 1162261467 % n == 0;
    }
};
// @lc code=end
