#include <iostream>
#include <array>
#include <ctime>
using namespace std;

void arr1(int size, int arr[]){
  srand(time(NULL));
  for(int i=0;i<size;i++){
  arr[i]=rand()%100+1;
  cout<<arr[i]<<endl;
  }
  
}
int main(){
  
  int arr[6];
  int size=sizeof(arr)/4;
  cout<<size<<endl;
arr1(size,arr);

  system("pause");
  return 0;
}