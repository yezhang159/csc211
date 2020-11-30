#include <iostream>
using namespace std;

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
 int n;
 int sum=1;
 cin>>n;
 factorial(n,sum);

system("pause"); 

  return 0;

}