#include <iostream>

using namespace std;

float volumeSquare (int b, int h){
  float vol= (0.33) * b * b * h; 
  return vol;

}
int main(){

  int b = 5, h = 6;
  cout << "Volume of square" << "base pyramid is " << volumeSquare(b,h) << endl;
       return 0;
}