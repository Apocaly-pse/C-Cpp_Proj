/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */
// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        // int num = 0;
        // if (n<2)
        // return 0;
        // else
        // {for (int i=2;i<n;i++)
        // {
        //     num+=isPrime(i);
        // }
        // return num;}
        // 方法一:暴力法, 超时.
        // 方法二:厄氏筛法
        // int ans = 0;
        // // 初始化有n个1的vector容器
        // vector<int> isPrime(n, 1);
        // for (int i=2;i<n;i++)
        // {
        //     if (isPrime[i]!=0)
        //     {
        //         ans+=1;
        //         if ((long long)i*i<n)
        //         {
        //             for (int j=i*i;j<n;j+=i)
        //                 isPrime[j]=0;
        //         }
        //     }
        // }
        // return ans;

        // 方法3:线性筛法
        vector<int> primes;
        vector<int> isPrime(n, 1);
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
            for (int j = 0; j < primes.size() && i * primes[j] < n; ++j) {
                isPrime[i * primes[j]] = 0;
                if (i % primes[j] == 0) {
                    break;
                }
            }
        }
        return primes.size();
    }
    // bool isPrime(int n)
    // {
    //     for (int i = 2; i*i <= n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             return false;
    //             break;
    //         }
    //     }
    //     return true;
    // }
};
// @lc code=end

