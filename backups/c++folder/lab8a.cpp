#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ifstream inputFile;
  string name, price, filename;

  cout <<"Enter the file name:";
  cin >> filename;

  inputFile.open(filename);
  if (inputFile)
  {
    cout << "Reading data from the file.\n";
    
    inputFile >> name; inputFile >> price;
    cout << name << " " << price << endl;

    inputFile >> name; inputFile >> price;
    cout << name << " "<< price << endl;

    inputFile >> name; inputFile >> price;
    cout << name <<" "<< price << endl;

    inputFile.close();
}
else 
    cout << "Error opening input file" <<endl;
    system("pause");
    return 0;
}