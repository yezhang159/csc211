#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
  int rand1(){
    srand(time(NULL));
    int num = rand()%100+1;
    return num;
  }

int main(){
  
    cout<< rand1()<<endl;
  /*int min =1;
  int max =100;
  cout<< rand1()<<endl;*/
  

  system("pause"); 

  return 0;
}