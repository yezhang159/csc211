//This program has variables of several of the integer types.
#include <iostream>
using namespace std;

int main(){
  int checking;
  unsigned int miles;
  long diameter;

  checking = -20;
  miles = 4276;
  diameter = 100,000;
  cout <<"We have made a long journey of " << miles;
  cout <<" miles." << endl;
  cout <<"Our checking account balance is " << checking;
  cout <<"\nThe galaxy is about " << diameter;
  cout <<"\nLight years in diameter" << endl;
  return 0;
}