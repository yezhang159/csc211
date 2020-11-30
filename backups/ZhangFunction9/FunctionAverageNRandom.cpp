#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rand1(int n,int min,int max){
  srand(time(NULL));
  int num1=rand()%100+1;
  int num2=rand()%100+1;
  int num3=rand()%100+1;
  int sum = (num1+num2+num3)/3;
  return sum;

}
int main(){
  int min= 1;
  int n= 3;
  int max= 100;
  cout<< rand1(n,min,max)<<endl;
  
system("pause"); 

  return 0;

}