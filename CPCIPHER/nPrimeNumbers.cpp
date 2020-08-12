#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int number;
  cin>>number;
  int i = 2;
  while(i<=number){
    bool flag = true;
    int n = 2;
    while (n<i/2){
      if( i%n ==0 ){
        flag = false;
      }
      n++;
    }
    if(flag == true){
      cout<<i<<" "<<endl;
    }
    i++;
  }
  return 0;
}
