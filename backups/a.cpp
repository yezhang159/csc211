#include <iostream>

using namespace std;

int main(){
  int salary = 0;
  string name="";
  cout<<"what is your name?";
  cin>>name;
  cout<<"what is your salary?";
  cin>>salary;
  salary=salary*0.6;
  cout<<name<<", your salary is "<<salary<<"."<<endl;
  return 0;
}