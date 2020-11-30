#include <iostream>

using namespace std;

int main() {
 int n = 4;
 int sum = 0;

 for (int i = 0; i < 5; i++) {
  sum += 7 * (n - 3); //7
  n++;
 }
 cout << sum;
 cout << endl;
 
 return 0;
}