#include<bits/stdc++.h>
using namespace std;

int main(){
  stack <char> s;  // (((x)((x))))
    s.push(')');    s.push(')');    s.push(')');
    s.push('x'); 
    s.push('(');  
    s.push(')');    s.push(')');
    s.push('x');
    s.push('(');    s.push('(');    s.push('(');    s.push('(');
    int count = 0;
    int max = 0;
    while (!s.empty()) 
    { 
        if( s.top() == '('){
          count++;
        }
        else if( s.top() == ')')
          count--;
        cout<<s.top()<<" ";
        if(count>max){
            max = count;
          }
        s.pop(); 
    }
    if(count==0){
      cout<<endl<<"balanced"<<endl;
    }
    cout<<max;
}
