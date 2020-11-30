#include<iostream>
#include <string>
#include<time.h>
using namespace std;
  
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
        
         swap(array[i], array[imin]);
   }
}
int * fun(int size,int *x){
  int *ptr;
  ptr=new int[size];

  for (int i=0;i<size;i++){
    *(ptr+i)=*(x+i);
  }
    selectionSort(ptr,size);

for(int i=0;i<size;i++){
  cout<<*(ptr+i)<<endl;
}


  return ptr;
}

int main()
{

int size=4;
int *arrptr;
int x[4]={3,2,1,4};
arrptr=x;
fun(size,arrptr);



    system("pause");
    return 0;
}