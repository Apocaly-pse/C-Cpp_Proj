/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        int n = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            n += ((int)s[s.size()-1-i] - 64) * pow(26, i);
        }
        return n;
    }
};
// @lc code=end

