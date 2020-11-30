#include<iostream>
#include <string>
#include<time.h>
using namespace std;
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