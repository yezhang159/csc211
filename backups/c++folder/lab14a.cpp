#include<iostream>
#include <string>
#include<time.h>
using namespace std;
int * fun(int size){
srand(time(NULL));

  int *ptrArr;
  ptrArr = new int [size];

  for(int i=0;i<size;i++){ 

    *(ptrArr+i) =rand()%100+1;
    cout<<*(ptrArr+i)<<endl;
  }

  return ptrArr;
}


int main()
{

int size=4;
fun(size);


    system("pause");
    return 0;

}

