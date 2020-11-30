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
  void setnumber(string n){number = n;}
  void setcredits(int c){credits = c;}
  void settitle(string t){title = t;}
  string getnumber(){return(number);}
  int getcredits(){return(credits);}
  string gettitle(){return(title);}

};



int main(){
  Course csc211;
  csc211.setnumber("CSC 211");
  csc211.settitle("Programming II");
  csc211.setcredits(3);
  cout<<csc211.getnumber()<<" is "<<csc211.gettitle()<<" and has "<<csc211.getcredits()<<" credits"<<endl;







  return 0;
}