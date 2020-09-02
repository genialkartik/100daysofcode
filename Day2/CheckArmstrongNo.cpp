// www.geeksforgeeks.org/java-program-to-check-armstrong-number/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int number = n;
  int digits = 0;
  while(n>0){
    digits++;
    n=n/10;
  }
  int rem;
  int sum = 0;
  n = number;
  while(n>0){
    rem = n%10;
    sum = sum + pow(rem, digits);
    n = n/10;
  }
  if(sum == number)
    cout<<number<<" is an armstrong number.";
  else
    cout<<number<<" is not an armstrong number.";
}

// output:
// 371 is an armstrong number.
// 234 is not an armstrong number.
