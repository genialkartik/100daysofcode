
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  int ar[] = {1,2,3,4,5};
  int count = 0;
  int k;
  if( ar[0] > ar[1]){
    k = 1;
  }
  else{
    k =0;
  }

    if( k == 0){
      for(int i = 1; i < 5; i++){
        cout<<"0";  
      if( ar[i] < ar[i+1]){
        count++;
        continue;
      }
      else{
        break;
      }
    }
    }
    else if( k == 1){
      for(int i = 0; i < 5; i++){
      if( ar[i] > ar[i+1]){
        count++;
      cout<<"1";
        continue;
      }
      else{
        break;
      }
      }
    }
  
  cout<<count<<endl;
  if(count == 4){
    cout<<"it is monotonic.";
  }
  else{
    cout<<"it is not monotonic.";
  }

	return 0; 
} 


