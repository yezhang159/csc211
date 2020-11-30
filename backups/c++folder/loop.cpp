#include <iostream>
using namespace std;
int main(){

    int input;
    
    cout<<"Your first input, between 11 and 111, but not 101. \n";
    cin >> input;

    while (input< 11|| input >111 || input==101){
      cout<<"input is not valid, please try agian."<<endl;
      cin >>input;
    }

      cout<< "success, exit now."<<endl;
      return 0;


}