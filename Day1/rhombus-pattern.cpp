// www.geeksforgeeks.org/program-to-print-solid-and-hollow-rhombus-patterns/

#include <bits/stdc++.h>
using namespace std;

int main(){
  for(int i=0; i<7; i++){
    for(int j=7-i; j>1; j--){
      cout<<" ";
    }
    for(int k=0; k<7; k++){
      cout<<"*";
    }
    cout<<endl;
  }
}
