#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int a[100] = {1,2,3};
  cout<<a<<endl; // address1
  cout<<&a[0]<<endl; // address1

  int *b = a;
  int *c = &a[0];
  int *d;

  *c = 100;

  b = a+8;
  d=(a+1);

  cout<<b<<endl; // address2
  cout<<c<<endl; // address1

  cout<<endl;
  cout<<*b<<endl; // 0
  cout<<*c<<endl; // 100
  cout<<d<<endl; // address3
  cout<<*d<<endl; // 2
  
  return 0;
  
}
