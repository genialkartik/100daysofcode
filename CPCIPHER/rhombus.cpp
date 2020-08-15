#include<bits/stdc++.h>
using namespace std;

int main(){
  // solid Rhombus
  for(int i=0; i<5; i++){
    for(int j=5-i; j>1; j--){
      cout<<" ";
    }
    for(int j=0; j<5; j++){
      cout<<"*";
    }
    cout<<endl;
  }

  cout<<endl<<endl<<endl;

  // hollow Rhombus
  for(int i=0; i<5; i++){
    for(int j=5-i; j>1; j--)
      cout<<" ";
    if(i==0 || i==5-1){
      for(int j=0; j<5; j++){
        cout<<"*";
      }
    }
    else{
      for(int j=0; j<5; j++){
        if(j==0 || j==5-1)
          cout<<"*";
        else
          cout<<" ";
      }
    }

    cout<<endl;
  }
}
