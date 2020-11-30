#include<iostream>
#include <string>
#include<time.h>
using namespace std;
int * fun(int size){
srand(time(NULL));

  int *ptrArr;
  ptrArr = new int [size];

  for(int i=0;i<size;i++){ 

    *(ptrArr+i)  =rand()%100+1;
    cout<<"index : "<<i <<" ";
    cout<<*(ptrArr+i)<<endl;
    cout<<"with no *"<<ptrArr+i<<endl;
  }

  return ptrArr;
}

int * fun1(int size,int *x,int *y){
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

int size=4;
fun(size);

int size=3;
int *ptrx, *ptry;
int x[3];
int y[3];

fun1(3,ptrx,ptry);


    system("pause");
    return 0;

}

