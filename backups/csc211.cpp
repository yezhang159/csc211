#include <iostream>

using namespace std;
class Person{
private:
  string name;
  int age;
public:
  Person(){
    name="";
    age = 0;
  }
  void setage(int a)
  {
    if ( a>=0)
    age = a;
    else
    {
      age = 0;
    }
    
  }
  int getage(){
    return (age);
  }
  void birthday(){
    age++;
  }

};
int main(){

  Person Joe;
  Joe.setage(-7); 
  Joe.birthday();
  cout<<Joe.getage()<<endl;
}