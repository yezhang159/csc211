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


struct triangle{
 int length1;

};
int *fun(triangle *t2,int size){
  int *ptr;
  int temp=t2->length1;
  for(int i=0;i<size;i++){
    if(t2->length1<(t2+i)->length1){
      temp=(t2+i)->length1;
    }
  }
  ptr=&temp;
  return ptr;
}

int main(){

RightTriangle tri;
RightTriangle * t1;
t1= &tri;

cout<<"enter the length of triangle "<<endl;
cin>> tri.length;

func(t1);

int size=3;
triangle tri2[3];
triangle * t2;
t2= tri2;

return 0;

}
