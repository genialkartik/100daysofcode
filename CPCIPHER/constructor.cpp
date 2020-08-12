#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Friend {  
  public:    
  string name;
  int age;
  // constructor have no return type
  Friend(string Name, int Age){
    name= Name;
    age= Age;
  }

  ~Friend(){
    cout<<"destructor"<<endl;
  }

  string getName(){
    return name;
  }

  int getAge(){
    return age;
  }

  void setName(string newName){
    name = newName;
  }

  void setAge(int newAge){
    age = newAge;
  }
};

int main() {
  Friend aa("Kartik", 21);
  Friend bb("Tyagi", 23);
  int age;
  cin>>age;
  aa.setAge(age);

  cout<<aa.getName()<<endl;
  cout<<aa.getAge()<<endl;
  cout<<bb.getName()<<endl;

  return 0;
}
