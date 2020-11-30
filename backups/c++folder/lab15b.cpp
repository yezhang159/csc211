#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct triangle{
 int length;

};
int *fun(triangle *t1,int size){
  int *ptr;
  int temp=t1->length;
  for(int i=0;i<size;i++){
    if(t1->length<(t1+i)->length){
      temp=(t1+i)->length;
    }
  }
  ptr=&temp;
  return ptr;
}
int main(){
int size=3;
triangle tri[3];
triangle * t1;
t1= tri;


return 0;

}
