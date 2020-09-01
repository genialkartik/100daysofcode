// www.geeksforgeeks.org/programs-printing-pyramid-patterns-java/

#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0; i<7; i++){
      for (int j=7-i; j>1; j--){
        cout<<" ";
      }
      for (int j=0; j<=i; j++ ){
        cout<<("* ");
      }
      cout<<endl;
    }
}

// Output
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *
