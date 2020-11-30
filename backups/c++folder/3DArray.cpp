#include <iostream>
using namespace std;




int main(){
  int sum=0;
  int arr1[3][3][3];

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
        arr1[i][j][k]=k;
       // cout<<k<<" ";
        if (i==j&&i==k){
          sum+=arr1[i][j][k];
        }
      }
      
    }
  }
    cout<<"sum="<<sum<<endl;

system("pause");
return 0;
}
