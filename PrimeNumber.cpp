#include <bits/stdc++.h>
using namespace std;

int main() {
  int flag = 1;
  int number;
  cin>>number;
  for(int i=2; i<number/2; ++i) {
    if(number%i == 0 ){
      flag = 0;
    }
  }
  if(flag == 1)
  cout<<number<<" is a prime number"<<endl;
  else
  cout<<number<<" is not a prime number"<<endl;
}
