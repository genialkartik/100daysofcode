#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&ar){
  for(int i = 0; i<ar.size()-1; i++){
    for(int j = 0; j<ar.size()-i-1; j++){
      if(ar[j] > ar[j+1]){
        int temp = ar[j];
        ar[j] = ar[j+1];
        ar[j+1] = temp;
      }
    }
  }
}

int main(){
  vector<int>ar = {2, 23, 5, 22, 52, 34, 3};
  bubbleSort(ar);
  for(int i = 0; i<ar.size(); i++){
    cout<<ar[i]<<" ";
  }
}
