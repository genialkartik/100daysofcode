#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter Binary Number to convert into Decimal Number:";
 cin>>n;
 int res = 0;
 int i = 0;
 for(int j=n; j>0; j=j/10){
   int unit = j%10;
   res += unit * pow(2, i);
   i++;
 }
 cout<<res;
 return 0;
}
