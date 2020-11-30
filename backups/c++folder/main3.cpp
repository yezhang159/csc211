#include <iostream>
#include <cmath>
using namespace std;
int main(){

  cout << "please input 2 integers a and b, where it will output a/b" << endl;

  int num1, num2;
  

  cin >> num1;
  cin >> num2;

  if(num2 != 0) {
    double res = (double)num1/num2;
    cout << "result is " << res << endl;
  } 
  else {
    cout << "b cannot be 0" << endl;
  }


  return 0;

}