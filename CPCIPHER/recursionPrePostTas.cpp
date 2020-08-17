#include <bits/stdc++.h>
using namespace std; 

void res(int n){
  if(n!=0){
    cout<<n; //decreasing
    res(n-1);
    cout<<n; // increasing
  }
}

int main()
{
    res(6);
    return 0;
}

