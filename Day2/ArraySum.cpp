// www.geeksforgeeks.org/add-two-numbers-represented-by-two-arrays/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int ar1[] = {9,1,2,3};
  int ar2[] = {2,1,4};
  int carry = 0;
  int sum = 0;
  int l1 = sizeof(ar1)/sizeof(ar1[0]);
  int l2 = sizeof(ar2)/sizeof(ar2[0]);
  int maxAr = max(l1, l2);
  int minAr = min(l1, l2);
  int ar[maxAr-1]; // max array
  if(l1>l2){
    for(int i=0; i<l1; i++){
      ar[i] = ar1[i];
    }
  }
  else{
    for(int i=0; i<l2; i++){
      ar[i] = ar2[i];
    }
  }
  int count = 0;
  for(int i = l1-1, j = l2-1; minAr>0; minAr--, i--, j--){
    int unit = ar1[i] + ar2[j] + carry;
    if(unit>9){
      carry = unit/10;
      unit = unit%10;
    }
    sum = (unit*pow(10, count)) + sum;
    count++;
  }

  for(int i=maxAr-count-1; i>=0; i--, count++){
    sum = (ar[i]*pow(10, count)) + sum;
  }
  cout<<sum;
}
