/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        while (columnNumber) 
        {
            columnNumber-=1;
            s = (char)(65+columnNumber%26) + s;
            columnNumber /= 26;
        }
        return s;
    }
};
// @lc code=end

