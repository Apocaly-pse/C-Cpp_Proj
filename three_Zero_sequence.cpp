#include <iostream>
using namespace std;
const int N=30;
int main()
{
    int f[N] = {0, 0, 0, 1};
    for(int n=4; n <= N; n++)
    {
        f[n] = 2 * f[n - 1] + (1 << (n - 4)) - f[n - 4];
        cout<<"Length: "<<n<<", number: "<<f[n]<<"\t"<<endl;
    }
    return 0;
}