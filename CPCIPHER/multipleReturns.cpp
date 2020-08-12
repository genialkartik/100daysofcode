#include <bits/stdc++.h>
using namespace std;
 
class CalculatedValues {
 public:
  int add;
  int sub;
  int multiply;
  float divide;
 
  CalculatedValues(int first, int second) {
    add = first + second;
    sub = first - second;
    multiply = first * second;
    divide = (float (first) / second);
  }
};
 
// Returning multiple values from our function
CalculatedValues* calculator(int first, int second) {
  CalculatedValues* result = new CalculatedValues(first, second);
  return result;
}
 
int main() {
  CalculatedValues* ro = calculator(25, 5);
  cout << &ro << "\n";
  cout << ro->add << " " << ro->sub << " " << ro->multiply << " " << ro->divide
       << "\n";
}

#include <bits/stdc++.h>
// #include <math.h>
// using namespace std;

// void fn(int &,int &,int &,int &,int x,int y);

// int main() {
// 	int add,sub,mul,div,x,y;

// 	cout<<"Enter numbers x,y: "<<endl;
// 	cin>>x>>y;

// 	fn(add,sub,mul,div,x,y);

// 	cout<<"Addition: "<<add<<endl;	
// 	cout<<"Subtraction: "<<sub<<endl;
// 	cout<<"Multiplication: "<<mul<<endl; 
// 	cout<<"Division: "<<div<<endl; 
//   return 0;
// }
// void fn(int &a,int &s,int &m,int &d,int x,int y) {
// a=x+y;
// s=x-y;
// m=x*y;
// d=x/y;
// }
