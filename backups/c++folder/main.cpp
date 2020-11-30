#include <iostream>
using namespace std;
#include <math.h>       
int main() {

  bool q1,q2,q3,q4;

  int a= 2, b=3, c=4;
  bool d= true, e= true, f=true;
  q1 = ((a < 3 * b) && ((3 * b) >= (cos(c) / a+5))); // 1 == true

  
  q2 = ((sqrt(a) - 7) / (b*b)) != c; // 1 == true

   
  q3 = (d || e) && f; // 1 = true

  
  q4 = (a < b) || !d;  // 1 = true

  cout << q1 << q2 << q3 << q4 << endl;
  return 0;
  
}
