#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    //     int n, k;
    //     // cout<<"Enter a positive integer: "; cin>>n;

    //     for (n=1;n<=100;++n) {
    //         if (n==1)
    //             cout<<"1 is not prime number."<<endl;
    //         else
    //             for (k=2;k<n;++k)
    //                 if (n%k==0) break;

    //         if (k<n)
    //             cout<<n<<" is not prime number."<<endl;
    //         else
    //             cout<<n<<" is prime number."<<endl;
    // }
    int n = 97;
    if (isPrime(n))
    {
        cout << n << "是素数" << endl;
    }

    return 0;
}