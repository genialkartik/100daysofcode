#include<bits/stdc++.h>
using namespace std;
int f(int m, int n) {
  int ans = 1;
  int count = 0;
  while (m >= 0) {
    ans = ans * (ans + 1);
    count++;
    cout<<"ans: "<<ans<<endl;
    m = m-n;
    cout<<"m: "<<m<<endl;
  }
  cout<<count<<endl;
  return(ans);
};
int main(){
  cout<<f(140,15);
}
