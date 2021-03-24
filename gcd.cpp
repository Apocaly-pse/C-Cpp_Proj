#include<iostream>
using namespace std;

// 计算两个数的最大公因数
// 采用直观的方式进行编写
int main() {
    int m, n, gcd;

    cout<<"Input m:"; cin>>m;
    cout<<"Input n:"; cin>>n;

    // for (int k=1;k<=m && k<=n;++k) {
    //     if (m%k==0 && n%k==0)
    //         gcd = k;
    // }
    // cout<<"gcd is "<<gcd<<endl;

    // 第二种方法，采用三元运算符提高运算效率
    int k = (m<n ? m:n);
    for (; k>0;k--){
        if (m%k==0 && n%k==0) {
            gcd=k;break;
        }
    }
    cout<<"gcd is "<<gcd<<endl;


}