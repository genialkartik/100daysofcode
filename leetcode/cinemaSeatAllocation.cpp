
#include <bits/stdc++.h> 
using namespace std; 


int main() 
{
  int n  = 3;
  vector<vector<int> > reservedSeats{ 
              { 0, 1 }, 
							{ 0, 2 }, 
							{ 0, 7 },
							{ 1, 5 },
							{ 2, 0 },
							{ 2, 9 },
               }; 

      int count = 0;
      int result = 0;
      vector<vector<int>>ar(n, vector<int>(10, 1));
      bool flag = true;
      int k = 0;
      cout<<reservedSeats[0][]<<endl;
      
      
      for(int i = 0; i<n; i++){
        count = 0;
        
        for(int j  = 0; j<10; j++){
          if( ar[i][j] != reservedSeats[i][j] ){
            if(count == 4){
              count = 0;
              count++;
            }
            else{
              count++;
            }
          }
          else{
            count = 0;
          }
        cout<<i<<"-"<<j<<" -> "<<count<<endl;
        }
        if(count == 4){
          result++;
        }
      }
   cout<<result;

} 


