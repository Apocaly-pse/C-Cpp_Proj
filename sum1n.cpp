#include<iostream>
using namespace std;

int main()
{
  const int n = 10;
  char a[n][n+1];
  printf("%lu\n", sizeof(a)>>1);
  return 0;
}
