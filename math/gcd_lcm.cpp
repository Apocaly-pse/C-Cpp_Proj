#include<iostream>
using namespace std;

int gcd(int m, int n) {
    // 采用三元运算符提高运算效率
    int result;
    for (int k = (m<n ? m:n); k>0;k--){
        if (m%k==0 && n%k==0) {
            result=k;
            break;
        }
    }
    return result;
}

int gcd_recursion(int m, int n) {
    return (!n)?m:gcd_recursion(n,m%n);
}

int main() {
    int m, n;

    cout<<"Input m:"; cin>>m;
    cout<<"Input n:"; cin>>n;

    cout<<"gcd(recursion) is "<<gcd_recursion(m,n)<<endl;
    cout<<"gcd(loop) is "<<gcd(m,n)<<endl;
    cout<<"lcm is "<<m*n/gcd(m,n)<<endl;

}