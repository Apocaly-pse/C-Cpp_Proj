#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    // 正向计算，可能会带来舍入误差
    long double S=1e14;
    for (long double i=1;i<=50000;++i) {
        S+=1/i;
    }
    cout<<fixed<<setprecision(6)<<S;

    // // 反向计算，减少舍入误差
    // long double S=0;
    // for (long double i=50000;i>0;i--) {
    //     S+=1/i;
    // }
    // cout<<fixed<<setprecision(6)<<S+100000000000000;

    return 0;
}