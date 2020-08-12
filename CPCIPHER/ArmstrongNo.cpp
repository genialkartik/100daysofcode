#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int n;
  int sum = 0;
  cout<<"enter No: ";
  cin>>n;
  int digitcount = 0;
  int temp = n;
  while(temp>0){
    digitcount++;
    temp = temp/10;
  }
  int x;
  int number = n;
  while(number>0){
    x = number%10;
    sum += pow(x, digitcount);
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
