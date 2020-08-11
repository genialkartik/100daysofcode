#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int flag = 1;
  int number;
  cin>>number;

  ////// Method 1
  // for(int i=2; i<number/2; ++i) {
  //   if(number%i == 0 ){
  //     flag = 0;
  //   }
  // }
  // if(flag == 1){
  //   cout<<number<<" is a prime number.";
  // }
  // else{
  //   cout<<number<<" is not a prime number";
  // }

  ////// Method 2
  // int i = 2;
  // while(i < number){
  //   if(number%i == 0){
  //     cout<<number<<" is not a prime number"<<endl;
  //     break;
  //   }
  //   i++;
  // }
  // if(i == number)
  // cout<<number<<" is a prime number"<<endl;

  ////// Method 3  // Most effective
  int i = 2;
  while(i < sqrt(number)){
    if(number%i == 0){
      flag = 0;
      cout<<number<<" is not a prime no.";
      break;
    }
    i++;
  }
  if( flag == 1){
    cout<<number<<" is a prime no.";
  }
  
}
