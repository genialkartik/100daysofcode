#include <bits/stdc++.h>
using namespace std; 

int m = 0;
void res(int n){
  cout<<endl;
  if(n==0){
    cout<<0;
    res(n-2);
  }
  else if(n>0){
    if(n==1){
      cout<<n;
      res(0);
    }else{
    cout<<n;
    res(n-2); }
  }
  else if(n<0 && abs(n)<=m) {
    cout<<abs(n);
    res(n-2);
  }
}
int main()
{
  int n; cin>>n;
  m = n;
  res(n);
  return 0;
}

