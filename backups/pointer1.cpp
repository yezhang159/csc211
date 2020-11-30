/*#include <iostream>
using namespace std;

int main(){
  int*ip;
  int*ip2;
  ip = new int[5];
  *ip=0;
  *(ip+1) = 1;
  *(ip+2) = *(ip+ *(ip+1));
  ip2=ip+4;
  return 0;
}*/
#include <iostream>
using namespace std;

int main()
{ 
          int arr[3][3] = { {1,2,3},{2,4,6},{3,6,9} };
          for (int i = 0; i < 3; i++)
                 for (int j = 2; j >= 0; j--)
                      if (i != j)
                          cout << (arr[i][j] + arr[j][i]) <<endl;
}