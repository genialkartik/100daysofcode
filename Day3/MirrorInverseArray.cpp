// www.geeksforgeeks.org/check-if-the-given-array-is-mirror-inverse/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int ar[n];  // {3, 4, 2, 0, 1}
  for(int i=0; i<n; i++)
    cin>>ar[i];
  int flag = true;
  for(int i=0; i<n; i++){
    if(i != ar[ar[i]]){
      flag = false;
      break;
    }
  }
  if(flag)
    cout<<"Mirror Inverse";
  else
    cout<<"Not a Mirror Inverse";
}
