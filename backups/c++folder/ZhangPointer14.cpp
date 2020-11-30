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
    
  }

  return ptrArr;
}
int * fun1(int size1,int *x,int *y){
  int *ptr;
  int arr[size1*2];
  ptr=arr;
  int j=0;

  for(int i=0;i<size1*2;i++){
    if(i<size1){
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

void selectionSort(int *array2, int size2) {
   int i, j, imin;
   for(i = 0; i<size2-1; i++) {
      imin = i;   
      for(j = i+1; j<size2; j++)
         if(array2[j] < array2[imin])
            imin = j;
        
         swap(array2[i], array2[imin]);
   }
}
int * fun(int size2,int *x2){
  int *ptr2;
  ptr2=new int[size2];

  for (int i=0;i<size2;i++){
    *(ptr2+i)=*(x2+i);
  }
    selectionSort(ptr2,size2);

for(int i=0;i<size2;i++){
  cout<<*(ptr2+i)<<endl;
}


  return ptr2;
}

void selectionSort2(int *array3, int size3) {
   int e, f, imin1;
   for(e = 0; e<size3-1; e++) {
      imin1 = e;   
      for(f = e+1; f<size3; f++)
         if(array3[f] < array3[imin1])
            imin1 = f;
        
         swap(array3[e], array3[imin1]);
   }
}
void fun1(int size3,int *arr3,int * min,int * max){
  
  selectionSort2(arr3,size3);
  min=arr3;
  max=arr3+size3-1;
  cout<<"min: "<<*min<<endl;
  cout<<"max: "<<*max<<endl;

}

int main()
{

int size=4;
fun(size);


int size1=3;
int *ptrx, *ptry;
int x[3];
int y[3];

fun1(3,ptrx,ptry);

int size2=4;
int *arrptr;
int x2[4]={3,2,1,4};
arrptr=x2;
fun(size2,arrptr);


int size3 =5;
  int *arrPtr1,*minPtr,*maxPtr;
  int arr3[5]={4,2,10,7,5};
  arrPtr1=arr3;
  int min=2,max=10;

  minPtr=&min;
  maxPtr=&max;

fun1(size3,arrPtr1,minPtr,maxPtr);

    system("pause");
    return 0;

}

