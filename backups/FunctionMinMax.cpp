#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rand1(int min,int max){
  srand(time(NULL));
  int num=rand()%100+1;
  return num;

}
int main(){
  int min =1;
  int max =100;
  
  cout<< rand1(min,max)<<endl;
  
system("pause"); 

  return 0;

}