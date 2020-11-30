#include <iostream>
using namespace std;
int main(){
  int income;
  cin >> income;
  
  cout <<"she pays " <<(double)income*(income>10000000?0.01:0.99)<<endl;
  cout <<"she left " <<(double)income*(income>10000000?0.99:0.01)<<endl;
  return 0; 


}