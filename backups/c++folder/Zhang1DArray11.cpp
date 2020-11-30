#include <iostream>
#include <string>
using namespace std;

void arr3(int size1, int arr2[]){
  srand(time(NULL));
  for(int i=0;i<size1;i++){
  arr2[i]=rand()%100+1;
  cout<<arr2[i]<<endl;
  }
  
}

void  arr4(int size2,int arr5[],int index){
  for(index=0;index < size2;index++){
    cout<<arr5[index]<<endl;
  }
}

int arr6(int size3,int arr7[],int num){
  num=num-1;
  for(int i=0;i<size3;i++){
    if(arr7[i]==num){
      return i;
    }
  }
  return -1;
}
void findmax(int speed[], int size){
    int max;
    max = speed[0];
    for (int i = 0; i < size-1; i++)
    {
        if (speed[i] < speed[i + 1])
        {
            max = speed[i + 1];
        }
    }
    cout <<"Max: "<<max<<endl;
}


void recursive (int speed[], int size , int max, int i=1)
{    
    
    if (size != 0){
        
  if (i == size)
  {
      cout << "Max speed found by recursive:" << max<<endl;
    }
  else
    {
      if (max < speed[i])
      {
   max = speed[i];
          
      }
      recursive (speed, size, max, i + 1);
    }
    }
    else {
        cout <<"Empty Array!"<<endl;
    }
}


int main(){
  int arr0[8]={1,2,3,4,5,6,7,8};

  int arr1[14]={};

  int arr2[6];
  int size1=sizeof(arr2)/4;
  cout<<size1<<endl;
  arr3(size1,arr2);
  cout<<endl;

  int arr5[3]={1,2,3};
  int size2 = 3;
  int index = 0;
  arr4(size2,arr5,index);
  cout<<endl;


  int arr7[5]={1,2,3,4,5};
  int size3 = 5;
  int num = 5;

  cout<<arr6(size3,arr7,num)<<"\n";
  
  
  int size = 5;
  int speed[5] = { 10, 20, 30, 40, 50};
  int max = speed[0];
  recursive(speed, size, max);
  findmax(speed, size);




  system("pause");
  return 0;
}