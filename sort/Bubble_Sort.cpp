#include <iostream>
using namespace std;
int main() 
{
    const int N = 3;
    int a[N] = {99,1,990};
    for (int i = 0; i < N; i++)
        {
            int flag = 0;
            for (int j = 0; j < N-i; j++)
                {
                    if (a[j]>a[j+1])
                        {
                            flag=1;
                            int t=a[j];
                            a[j]=a[j+1];
                            a[j+1]=t;
                        }
                }
            if (flag==0) break;
        }
    for (int i = 0; i <= N; i++)
        {
            cout<<a[i]<<" ";
        }
    cout<<endl;
    return 0;
}
