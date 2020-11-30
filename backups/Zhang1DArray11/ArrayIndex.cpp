#include <iostream>
using namespace std;

int arr1(int size,int arr[],int num){
  num=num-1;
  for(int i=0;i<size;i++){
    if(arr[i]==num){
      return i;
    }
  }
  return -1;
}

int main(){
  
int arr[5]={1,2,3,4,5};
int size = 5;
int num = 5;

cout<<arr1(size,arr,num)<<"\n";


  system("pause");
  return 0;
}