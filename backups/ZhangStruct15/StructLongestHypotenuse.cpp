#include <iostream>
#include <string>
#include <sstream>
using namespace std;
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
int size=3;
triangle tri2[3];
triangle * t2;
t2= tri2;


return 0;

}
