#include <iostream>
using namespace std;
void  arr1(int size,int arr[],int index){
  for(index=0;index < size;index++){
    cout<<arr[index]<<endl;
  }
}
int main(){

int arr[3]={1,2,3};
int size = 3;
int index = 0;
arr1(size,arr,index);


  system("pause");
  return 0;
}