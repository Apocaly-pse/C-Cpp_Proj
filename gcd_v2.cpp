#include <iostream>
using namespace std;

int gcd(int a, int b) {
  // return b==0?a:gcd(b,a%b);
  return a%b==0?b:gcd(b,a%b);
}

int main(int argc, char const *argv[])
{
  cout<<gcd(20,180)<<endl;
  return 0;
}