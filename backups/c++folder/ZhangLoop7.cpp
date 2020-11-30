#include <iostream>
#include <cmath>
using namespace std;

int main() {
 int n = 0;
 

 for (int i = 0; i < 7; i++) {
  n++;
  cout << n << "/";
  cout << pow(n,2) << ",";
  cout<<endl;
  
 }
 int a = 4;
 int sum = 0;

 for (int i = 0; i < 5; i++) {
  sum += 7 * (a - 3); //7
  n++;
 }
 cout << sum;
 cout<<endl;
 
 for (int i=0; i < 4;i++){
    for(int j=0;j<=i;j++)
    {
      cout << "*";
    }
   cout << endl;
 }
 
 return 0;
}
