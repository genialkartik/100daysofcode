#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>a={4, 3, 2, 9};
  vector<int>b={3, 2, 5};
  int n1 = a.size();
  int n2 = b.size();
  int x = 0, y = 0;
  int m = 1;
  for(int i=n1-1; i>=0; i--){
    x += a[i]*m;
    m = m*10;
  }
  int n = 1;
  for(int i = n2-1; i>=0; i--){
    y += b[i]*n;
    n = n*10;
  }
  cout<<x+y;
 return 0;
}   
