#include<iostream>
#include <string>
#include<time.h>
using namespace std;
int * fun(int size,int *x,int *y){
  int *ptr;
  int arr[size*2];
  ptr=arr;
  int j=0;

  for(int i=0;i<size*2;i++){
    if(i<size){
      *(ptr+i)= *(x+i);
    }
    else 
    {
      *(ptr+i)=*(y+j);
      j++;
    }
  }

  return ptr;
}


int main()
{
int size=3;
int *ptrx, *ptry;
int x[3];
int y[3];

fun(3,ptrx,ptry);




    system("pause");
    return 0;
}