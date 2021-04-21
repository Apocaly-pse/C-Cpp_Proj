#include <iostream>
using namespace std;

int main() {
    int n, k;
    // cout<<"Enter a positive integer: "; cin>>n;

    for (n=1;n<=100;++n) {
        if (n==1) 
            cout<<"1 is not prime number."<<endl;
        else 
            for (k=2;k<n;++k) 
                if (n%k==0) break;

        if (k<n)
            cout<<n<<" is not prime number."<<endl;
        else
            cout<<n<<" is prime number."<<endl;
}
}