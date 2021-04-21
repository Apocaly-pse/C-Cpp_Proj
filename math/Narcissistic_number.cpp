#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 10; i < 10000; ++i)
    {
        if (pow(i%10,3)+pow((i-i%10)/10%10,3)+pow(i/100,3)==i)
        {
            cout<<"Narcissistic numbers are "<<i<<endl;
        }
    }
    return 0;
}
