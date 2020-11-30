#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main(){
  ifstream inputFile;
  ofstream outFile;
  string name;
  double price;
  

  inputFile.open("price1.txt");
  if(!inputFile){
    cout << "error inFile";
    return 1;
  }
  outFile.open("test.txt");

  while(!inputFile.eof()){
    inputFile >> name;
    inputFile >> price;
    outFile << name;
    outFile << price;


  }

  inputFile.close();
  return 0;

  

}