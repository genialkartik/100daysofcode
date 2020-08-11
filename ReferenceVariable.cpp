#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int a = 10;
  int &b = a;
  cout<<a<<endl;
  cout<<b<<endl;
// output -> 10 10
  b = b+1;
  cout<<a<<endl;
  cout<<b<<endl;
// output -> 11 11
  a = a + 1;
  cout<<a<<endl;
  cout<<b<<endl;
// output -> 12 12

  return 0;
  
}
