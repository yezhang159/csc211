//This program calculates the user's pay.
#include <iostream>
using namespace std;

int main(){
  double hours, rates, pay;

  //get the number of hours worked.
  cout << "How many hours did you work?";
  cin >> hours;

  //get the hourly pay rate.
  cout << " How much do you get paid per hour?";
  cin >> rates;

  //calculate the pay.
  pay = hours * rates;
  
  //display the pay.
  cout << "You have earned $" << pay << endl;
  return 0;
}