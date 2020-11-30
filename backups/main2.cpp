#include <iostream>
using namespace std;
int main(){
   int min;
   int max;

   cout << "Enter a minimum number: " << endl;
   cin >> min;
   cout << "Enter a maximum number:" << endl;
   cin >> max;
   int random1, random2, random3;
   srand(time(0));
   random1 =  min + rand() % (max - min);
   random2 =  min + rand() % (max - min);
   random3 =  min + rand() % (max - min);

   cout << random1 << "\t" << random2 << "\t" << random3 << endl;

   return 0;
 }