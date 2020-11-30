#include <iostream>
#include <cmath>
#include <string>


struct mypyramid {
  int b;
  int h; 
  int l;
  

};
int main(){
using namespace std;
  mypyramid pyramid= 
  {       
        5,
        6,
        7 
          

  };
  cout << pyramid.b << endl;
  cout << pyramid.h << endl;
  cout << pyramid.l << endl;
  return 0;
}