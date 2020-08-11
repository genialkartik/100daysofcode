#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int x = 10;
  int *ptr = &x;
  int *ptr1 = &x;
  // x -> value
  // ptr -> addresof
  // & -> addressof
  // * -> value at addressof 

  cout<<x<<endl; // 10
  cout<<&x<<endl; // address1
  cout<<ptr<<endl; // address1
  cout<<*ptr<<endl; // 10
  cout<<&ptr<<endl; // address2
  cout<<*&x<<endl; // 10
  cout<<&(*ptr)<<endl; // address1
  cout<<*&(ptr)<<endl; //address1
  cout<<&*ptr<<endl; //address1
  
  return 0;
  
}
