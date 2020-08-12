#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int n;
  int sum = 0;
  cout<<"enter No: ";
  cin>>n;
  int powerof;
  cout<<"check Armstrong with power: ";
  cin>>powerof;
  int x;
  int number = n;
  while(number>0){
    x = number%10;
    sum += pow(x,powerof);
    number=number/10;
  }
  if(sum == n){
    cout<<n<<" is an Armstrong Number."<<endl;
  }
  else{
    cout<<n<<" is not an Armstrong Number."<<endl;
  }
  
  return 0;
  
}
