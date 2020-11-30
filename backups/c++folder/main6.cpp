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

int globalInt;
int main(){
  globalInt=9;
  char ch=0;
  int a= 8, b=2;
  int & ra=a;
  incVars(a,b);
  cout <<"ra is:"<<ra;
  cout <<"\na="<<a<<"b="<<b;

  double d= pow(2,3);
  d= add(a,2,3)*M_PI;
  cout <<"A is:"<<d <<"\n";
  
  cout <<"the count is:"<<getNextInt()<<""<<getNextInt()<<""<<getNextInt();
  cout <<"\n"<<getNextInt()<<"";
  cout <<"\n"<<getNextInt()<<"";
  cout <<"\n"<<getNextInt()<<"";
  
  cin.get(ch);
  return 0;






}