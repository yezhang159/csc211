#include <iostream>
using namespace std;
void fun(int size,int arr[]);



int main(){
int arr[6][5];
  for (int i=0;i<6;i++){
    for (int j=0;j<5;j++){
    arr[i][j]=j;
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }


int sum=0;
  int x[2][3];
  
  for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      sum+= x[i][j];
    
    }
    
  cout<<"sum="<<sum<<endl;
  }


  int sum1=0;
  int arr1[3][3][3];

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
        arr1[i][j][k]=k;
      
        if (i==j&&i==k){
          sum1+=arr1[i][j][k];
        }
      }
    }
  }
    cout<<"sum1="<<sum<<endl;
system("pause");
return 0;
}