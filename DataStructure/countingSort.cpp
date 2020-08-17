
//Counting sort which takes negative numbers as well 
#include <bits/stdc++.h>
using namespace std; 
  
void countSort(vector <int>& arr) 
{ 
  int min = *min_element(arr.begin(), arr.end());
  int max = *max_element(arr.begin(), arr.end());
  int range = max-min+1;
  int size = arr.size();
  vector<int>count(range);
  vector<int>output(size);
  for(int i=0; i<size; i++){
    count[arr[i]-min]++;
  }
  for(int i=1; i<count.size(); i++) {
    count[i] += count[i-1];
  }
  for(int i=size-1; i>=0; i--){
    output[count[arr[i]-min]-1] = arr[i];
    count[arr[i]-min]--;
  }
  for(int i=0; i<size; i++){
    arr[i] = output[size-i-1]; // decresing
    arr[i] = output[i]; // increasing
  }
} 
  
void printArray(vector <int> & arr)  
{  
    for (int i=0; i < arr.size(); i++)  
        cout << arr[i] << " ";  
    cout << "\n";  
} 
  
int main() 
{ 
    vector<int> arr = {4, 12, 3, 3, 8, 5, 1, 10}; 
    countSort (arr); 
    printArray (arr);
} 
