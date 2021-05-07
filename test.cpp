#include<iostream>
using namespace std;

int main()
{
  // cout<<sizeof(10)<<endl;
  int n = 10;
  char a[n][n+1];
  int ans = sizeof(a)>>1;
  cout<<ans;
  return 0;
}
