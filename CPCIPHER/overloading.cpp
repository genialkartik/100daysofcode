#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Area {  
  public:    
  void area(int r){
    cout<<2*r*r<<endl;
  }
  void area(int l, int b){
    cout<<1.0*l*b<<endl;
  }
  void area(double l, int b){
    cout<<l*b<<endl;
  }
};

int main() {
  Area a;
  a.area(4);
  a.area(2,3);
  a.area(2.2, 3);

  return 0;
}
