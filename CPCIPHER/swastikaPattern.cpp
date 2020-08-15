#include<bits/stdc++.h>
using namespace std;

int main(){
  int row =7, col = 7;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(i<row/2){
        if(j<col/2){
          if(j==0){ cout<<" *"; }
          else{ cout<<" "<<" ";}
        }
        else if(j==col/2){
          cout<<" *";
        }
        else{
          if(i==0){
            cout<<" *";
          }
        }
      }
      else if(i==row/2){
        cout<<" *";
      }
      else{
        if(j<col/2){
          if(i==row-1){
            cout<<" *";
          }
          else{
            cout<<" "<<" ";
          }
        }
        else if(j== col/2){
          cout<<" *";
        }
        else{
          if(j==col-1){
            cout<<" *";
          }
          else{
            cout<<" "<<" ";
          }
        }
      }
    }
      cout<<endl;
  }
}
