#include <iostream>
// #include <vector>
#include <string>
#include <cmath>

using namespace std;

int test(string s)
{
    // string<char> arr(10,1);
    // cout<<arr[1];
    // char a = 65;

    // cout << a << endl;
    // printf("%s\n", &a);
    int n = 0, m = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        m = (int)s[s.size()-1-i] - 64;
        n += m * pow(26, i);
    }
    return n;
}

int main(int argc, char const *argv[])
{
    string s;
    s = "AB";
    // s = "ZY";
    cout << test(s) << endl;
    return 0;
}
