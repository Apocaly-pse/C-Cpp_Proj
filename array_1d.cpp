#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    // int x[5]={};

    // for (int i = 0; i < 5; ++i)
    // {
    //     x[i]=2*i;
    // }

    // for (int i = 0; i < 5; ++i)
    // {
    //     cout<< "x["<<i<<"]="<<x[i]<<endl;
    // }
    int arr[3] = {1,2,3};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[2])<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    return 0;
}