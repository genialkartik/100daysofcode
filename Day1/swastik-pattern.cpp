// www.geeksforgeeks.org/swastika-patternprogram-to-print-swastika-pattern/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 7;
  for(int i=0; i<n/2; i++){
    for(int j=0; j<n; j++){
      if(j==0 || j==n/2 ||(i==0 && j>=n/2))
        cout<<"* ";
      else
      cout<<"  ";
    }
    cout<<endl;
  }
  for(int i=0; i<n; i++)
    cout<<"* ";
  cout<<endl;
  for(int i=n/2+1; i<n; i++){
    for(int j=0; j<n; j++){
      if(j==n-1 || j==n/2 || (i==n-1 && j<n/2))
        cout<<"* ";
      else
        cout<<"  ";
    }
    cout<<endl;
  }
}
