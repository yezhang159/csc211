#include <iostream>
#include <string>
using namespace std;

int fun(string car,string names[],int speed[],int size){
int max;
max=speed[0];

for(int i=0;i<size-1;i++){
  if(speed[i]<speed[i+1]){
    max=speed[i+1];
    
  }
}
return max;
  
}
int recursive(int speed[],int size,int max,int i){//assum max = speed[0]
//i=1
if(i==size){
  cout<<"max speed"<<max;
  return max;
}
else{
  if(max<speed[i+1]){
    max=speed[i+1];
  }
  recursive(speed,size,max,i+1);
  }
}
int main(){
  int max;
  int speed[5]={10,20,30,40,50,};
  



  max=speed[0];


  system("pause");
  return 0;
}