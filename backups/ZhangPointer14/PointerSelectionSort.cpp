#include<iostream>
#include <string>
#include<time.h>
using namespace std;
  
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

int main()
{

int size2=4;
int *arrptr;
int x2[4]={3,2,1,4};
arrptr=x2;
fun(size2,arrptr);



    system("pause");
    return 0;
}