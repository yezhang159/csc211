#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
  int rand1(){
    srand(time(NULL));
    int num = rand()%100+1;
    return num;
  }

  int rand2(int min,int max){
  srand(time(NULL));
  int num=rand()%10+0;
  return num;
  }

int average(int num1,int num2){
  int sum = (num1+num2)/2;
  return sum;
  }

int rand3(int n,int min1,int max1){
  srand(time(NULL));
  int num1=rand()%100+1;
  int num2=rand()%100+1;
  int num3=rand()%100+1;
  int sum = (num1+num2+num3)/3;
  return sum;

}
int rand4(int min2,int max2){
  srand(time(NULL));
  int sum=0;
  for(int n = 0; n<1000;n++){
    int num= rand()%100+1;
    sum= num+sum;
  }
  int average = sum/2;
  return average;
}
int average2(int min2,int max2){
  int sum= (min2+max2)/2;
  return sum;
}

int main(){
  
  cout<< rand1()<<endl;


  int min =0;
  int max =10;
  cout<< rand2 (min,max)<<endl;

  
  int a = 10;
  int b = 20; 

  cout<<average(a,b)<<endl;

  int min1= 1;
  int n= 3;
  int max1= 100;
  cout<< rand3(n,min1,max1)<<endl;


  int min2;
  cout<<"please enter the number of min:"<<endl;
  cin>>min2;
  
  int max2;
  cout<<"please enter the number of max:"<<endl;
  cin>>max2;

  
  cout<< rand4(min2,max2)<<endl;
  cout<< average2(min2,max2)<<endl;
  

  system("pause"); 

  return 0;
}