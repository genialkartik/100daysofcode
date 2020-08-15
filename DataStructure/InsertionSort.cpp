#include <bits/stdc++.h> 
using namespace std; 

void insertionSort(vector<int>&ar){
  int i=0, j=0;
  for(i=1; i<ar.size(); i++){
    int key = ar[i];
    j = i-1;
    while( j>=0 && ar[j]>key){
      ar[j+1] = ar[j];
      j--;
    }
    ar[j+1] = key;
  }
}

int main() 
{
  vector<int>ar = {5,1,6,2,34,36,12,56,77,2};
  insertionSort(ar);
  for(int i=0; i<ar.size(); i++ ) {
    cout<<ar[i]<<" ";
  }
} 

