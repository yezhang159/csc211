#include <iostream>
#include <string>
using namespace std;

void findmax(int speed[], int size){
    int max;
    max = speed[0];
    for (int i = 0; i < size-1; i++)
    {
        if (speed[i] < speed[i + 1])
        {
            max = speed[i + 1];
        }
    }
    cout <<"Max: "<<max<<endl;
}


void recursive (int speed[], int size , int max, int i=1)
{    
    
    if (size != 0){
        
  if (i == size)
  {
      cout << "Max speed found by recursive:" << max<<endl;
    }
  else
    {
      if (max < speed[i])
      {
   max = speed[i];
          
      }
      recursive (speed, size, max, i + 1);
    }
    }
    else {
        cout <<"Empty Array!"<<endl;
    }
}

int main ()
{
  int size = 5;
  int speed[5] = { 10, 20, 30, 40, 50};
  int max = speed[0];
  recursive(speed, size, max);
  findmax(speed, size);
  return 0;
}