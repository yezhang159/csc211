#include <iostream>
using namespace std;
int main(){

  cout<< "Please Type in your selection: \n";
  cout<< "1: The height of Everest \n"; 
  cout<< "2: The depth of Mariana trench \n";
  cout<< "3: The mass of water in Olympic size swimming pool \n";

  int option;
  cin >> option; 

  switch(option){
      case 1:
        cout << "the height of Everest is 8,848 m ";
        break;
      case 2:
        cout << "the depth of Mariana trench is 11,034 m ";
        break;
      case 3:
        cout << "the mass of water in Olympic size swimming pool is 2,499,329.8273 kilograms ";
        break;

  }
  return 0;
}