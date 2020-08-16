#include<bits/stdc++.h>
using namespace std;

int fib(int N){
      if(N==0){
        return 0;
      }
      else if(N<=2 && N>0){
        return 1;
      }
      else{
      int sum = 2;
      int a = 0, b = 1;
      int c = a+b;
      int i = 3;
      while(i<N){
        a=b;
        b=c;
        c=a+b;
        sum = b+c;
        i++;
      }
      return sum;
        }
}

int main(){
  int N;
  cin>>N;
  int res = fib(N);
  cout<<res;

}
