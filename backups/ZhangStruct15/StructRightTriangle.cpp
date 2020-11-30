#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct RightTriangle{
  int length;
};
void func(RightTriangle * t1){
  
  cout<<t1->length<<endl;
}

int main(){

RightTriangle tri;
RightTriangle * t1;
t1= &tri;

cout<<"enter the length of triangle "<<endl;
cin>> tri.length;

func(t1);

return 0;

}
