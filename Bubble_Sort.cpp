#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) 
{
    int a[9] = {9,7,3,2,95,8,1,4,6};
    for (int i = 0; i < 9; ++i)
        {
            int flag = 0;
            for (int j = 0; j < 9-i; ++j)
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
    for (int i = 0; i < 9; ++i)
        {
            cout<<a[i]<<" ";
        }
    cout<<endl;
    system("read");
    return 0;
}
