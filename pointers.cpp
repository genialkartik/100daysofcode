#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int x = 10;
  char c = 'A';
  string s = "aa";

  int *ptr = &x;
  char *ptr2 = &c;
  string *ptr3 = &s;

  cout<<x<<endl; // 10
  cout<<c<<endl; // A
  cout<<s<<endl; // aa
  cout<<ptr<<endl; // hexa decimal address
  cout<<ptr2<<endl; // A 
  cout<<ptr3<<endl; // hexa address
  
  cout<<sizeof(x)<<endl; // 4
  cout<<sizeof(c)<<endl; // 1
  cout<<sizeof(s)<<endl; // 32
  cout<<sizeof(ptr)<<endl; // 8
  cout<<sizeof(ptr2)<<endl; // 8
  cout<<sizeof(ptr3)<<endl; // 8

  // typecast is required in char only as mentioned below, else it'll give error
  cout<<(void *)ptr2 <<endl; // hexa address
  cout<<sizeof((void *)ptr2) <<endl; // 8
  // Explict Typecasting to void* so that cout treats char address as address
  cout<<sizeof(void *)<<endl; // 8

  cout<<endl;
  // typecast
  // void* -> generic type
  void* p = &x;
  cout<<p<<endl; //address
  
  p = &c;
  cout<<p<<endl; // address same as above
  
  return 0;
  
}
