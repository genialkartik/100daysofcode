#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&ar){
  for(int i=0; i<ar.size()-1; i++){
    int idx = i;
    for(int j = i+1; j<ar.size(); j++ ){
      if(ar[idx] > ar[j]){
        int temp = ar[j];
        ar[j] =  ar[idx];
        ar[idx] = temp;
      }
    }
  }
}

int main(){
  vector<int>ar = {100,13,53,8,6,4, 57,7,79,2};

  selectionSort(ar);
  for(int i=0; i<ar.size(); i++){
    cout<<ar[i]<<" ";
  }
}
