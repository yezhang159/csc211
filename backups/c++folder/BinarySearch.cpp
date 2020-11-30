#include <iostream>
#include <algorithm>
using namespace std;
int func(int arr[],int size, int num){
int l,r,mid;
l=0;
r=size-1;
mid=(r+l)/2;
//cout<<mid<<endl;
 while (l<=r){
   if(arr[mid]<num){
     l=mid+1;
   }
   else if(arr[mid]==num){
     cout<<"found ";
     return mid;
   }
   else{
     r=mid-1;
   }
  mid=(r+l)/2;
 }
 if(l>r){
   cout<<"not found "<<endl;
 }
    return -1;
}

int main(){

  int arr[6]={10,20,30,40,50,60};
  int size=6;
  int num =30;

cout<<func(arr,size,num)<<endl;

  system("pause");
 return 0;
}