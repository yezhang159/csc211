#include <iostream>
using namespace std;
void odd(int min,int max){

 if(min == max){
   cout<<min<<endl;
   return;
 }
  
  odd(min+2,max);
  cout<<min<<endl;
}
void factorial(int n,int sum){
  
if(n>1){
 sum*=n;
 factorial(n-1,sum);
cout<<sum<<endl;
}
else {
    return;
  }
}


int main(void){
 int min=0;
 cout<<"please enter an odd number:"<<endl;
 cin >> min;
 int max=0; 
 cout<<"please enter an odd number:"<<endl;
 cin >>max;
 odd(min,max);

 int n;
 int sum=1;
 cout<<"please enter a number:"<<endl;
 cin>>n;
 factorial(n,sum);

system("pause"); 

  return 0;

}