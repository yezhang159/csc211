#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int rand4(int min,int max){
  srand(time(NULL));
  int sum=0;
  for(int n = 0; n<1000;n++){
    int num= rand()%100+1;
    sum= num+sum;
  }
  int average = sum/2;
  return average;
}
int average2(int min,int max){
  int sum= (min+max)/2;
  return sum;
}
int main(){
  

  int min;
  cout<<"please enter the number of min:"<<endl;
  cin>>min;
  
  int max;
  cout<<"please enter the number of max:"<<endl;
  cin>>max;

  
  cout<< rand4(min,max)<<endl;
  cout<< average2(min,max)<<endl;

system("pause"); 

  return 0;

}
