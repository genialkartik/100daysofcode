// www.geeksforgeeks.org/program-binary-decimal-conversion/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int res = 0;
  int count = 0;
  int rem;
  while(n>0){
    rem = n%10;
    res = res + rem*pow(2, count);
    count++;
    n = n/10;
  }
  cout<<res;
}
