#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&ar, int l, int m, int r){
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  int Left[n1];
  int Right[n2];
  for(i=0; i<n1; i++){
    Left[i] = ar[l+i];
  }
  for(j=0; j<n2; j++){
    Right[j] = ar[m+1+j];
  }
  i=0; j=0; k=l;
  while( i<n1 && j<n2){
    if(Left[i]<=Right[j]){
      ar[k] = Left[i];
      i++;
    }
    else{
      ar[k] = Right[j];
      j++;
    }
    k++;
  }
  while(i<n1){
    ar[k] = Left[i];
    i++; k++;
  }
  while(j<n2){
    ar[k] = Right[j];
    j++; k++;
  }
}

void mergeSort(vector<int>&ar, int l, int r){
  if(l<r){
      int m = l + (r -l)/2;
  mergeSort(ar, l, m);
  mergeSort(ar, m+1, r);
  merge(ar, l, m, r);
  }
}

int main(){
  vector<int>ar = {34,45 ,25,65,14,6,34,4};
  mergeSort(ar, 0, ar.size());
  for(int i=0; i<ar.size(); i++){
    cout<<ar[i]<<" ";
  }
}
