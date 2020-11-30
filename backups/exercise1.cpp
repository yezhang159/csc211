#include <iostream>

using namespace std;
class Course{

private:
  string number;
  int credits;
  string title;
  
public:
  Course(){
    number="";
    credits=0;
    title="";
  }
void setnumber(string n){
  number=n;
}
string getnumber(){
  return(number);
}
void setcredits(int c){
  if(c>=0)
  credits = c;
  else{
    credits = 0;
  }
}
int getcredits(){
  return(credits);
}
void settitle(string t){
  title=t;
}
string gettitle(){
  return(title);
}

};

class Student{

private:
string name;
double gpa;
int credits;

public:
Student(){
  name="";
  gpa=0.0;
  credits=0;
}
void setname(string n){
  name=n;
}
string getname(){
  return(name);
}
void setgpa(double g){
  if(g>=0.0)
  gpa = g;
  else{
    gpa=0.0;
  }
}
double getgpa(){
  return(gpa);
}
void setcredits(int c){
  if(c>=0)
  credits = c;
  else{
    credits = 0;
  }
}
int getcredits(){
  return(credits);
}
};


int main(){
  Course csc111;
  cout<<"CSC 111"<<endl;
  csc111.setnumber("1500");
  csc111.getnumber();
  cout<<csc111.getnumber()<<endl;
  csc111.setcredits(4);
  csc111.getcredits();
  cout<<csc111.getcredits()<<endl;
  csc111.settitle("introduction to programming");
  csc111.gettitle();
  cout<<csc111.gettitle()<<endl;

  Course csc211;
  cout<<"CSC 211"<<endl;
  csc211.setnumber("0500");
  csc211.getnumber();
  cout<<csc211.getnumber()<<endl;
  csc211.setcredits(4);
  csc211.getcredits();
  cout<<csc211.getcredits()<<endl;
  csc211.settitle("advance programming techniques");
  csc211.gettitle();
  cout<<csc211.gettitle()<<endl;

  Student myself;
  cout<<"my information"<<endl;
  myself.setname("Ye Zhang");
  myself.getname();
  cout<<myself.getname()<<endl;
  myself.setgpa(3.5);
  myself.getgpa();
  cout<<myself.getgpa()<<endl;
  myself.setcredits(4);
  myself.getcredits();
  cout<<myself.getcredits()<<endl;

  Student Tom;
  cout<<"friend's information"<<endl;
  Tom.setname("Tom");
  Tom.getname();
  cout<<Tom.getname()<<endl;
  Tom.setgpa(3.7);
  Tom.getgpa();
  cout<<Tom.getgpa()<<endl;
  Tom.setcredits(4);
  Tom.getcredits();
  cout<<Tom.getcredits()<<endl;

  return 0;
}