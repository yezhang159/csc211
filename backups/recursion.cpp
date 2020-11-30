#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;
int add(int,int,int);
int getNextInt();
void incVars(int&, int&);

int getNextInt(){
  static int count=0;
  count++;
  return count;
  
  
  
}