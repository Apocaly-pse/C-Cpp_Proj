#include <iostream>
#include <vector>
// #include <string>
// #include <cmath>

using namespace std;

// int test(string s)
// {
//     // string<char> arr(10,1);
//     // cout<<arr[1];
//     // char a = 65;

//     // cout << a << endl;
//     // printf("%s\n", &a);
//     int n = 0, m = 0;
//     for (int i = s.size() - 1; i >= 0; i--)
//     {
//         m = (int)s[s.size()-1-i] - 64;
//         n += m * pow(26, i);
//     }
//     return n;
// }

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
}

int main(int argc, char const *argv[])
{
    // string s;
    // s = "AB";
    // // s = "ZY";
    // cout << test(s) << endl;
    int arr[] = {1, 0, 0, 1, 9, 0};
    vector <int> a (arr, arr + 4);
    moveZeroes(a);
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}
