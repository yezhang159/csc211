/*#include <stdio.h>
#include<string.h>

int main()
{
char s1[10],s2[10];
char res[20];
printf("Enter string1");//read two strings suing gets function
gets(s1);
printf("Enter string2");
gets(s2);
strcpy(res,strcat(s1,s2));//use strcpy to copy two strings

printf("The resultant string is :");
puts(res);//print the resultant string
return 0;
}*/
/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Planet {
private:
 string name;
 double radius;
 double density;
public:
 void setName(string n) {name = n;}
 void setRadius(double r) { radius = r;}
 void setDensity(double d) { density = d;}
 string getName() { return name;}
 double getRadius() { return radius;}
 double getDensity() { return density;}
 double mass() { return ((4 / 3)*3.14*pow(radius, 3)*density);}
 
};
void sort(Planet *arrptr, int size ) {

 int i, j, min;
 // One by one move boundary of unsorted subarray  
 for (i = 0; i < size - 1; i++)
 {
  // Find the minimum element in unsorted array  
  min = i;
  for (j = i + 1; j < size; j++)
   if (arrptr[j].mass < arrptr[min].mass)
    min = j;

  // Swap the found minimum element with the first element  
  swap(&arrptr[min].mass, &arrptr[i].mass);
 }
}*/

/*int main() {
 int size = 10;
 Planet * arrptr = new Planet;
 Planet myPlanet[10];
 arrptr = myPlanet;
 sort(arrptr, size);
 delete arrptr;

 return 0;
}
 
 
 struct equilateralPentagon {
    int side;
  };

  int perimeter(equilateralPentagon *sides) {
    return 5 * sides->side;
  }*/

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int recur(int num,int x) {
 if (x <= num) {
  recur(num, x++);
  return (sqrt(x + 3) / (pow(x, 2) + 1));
 }
 else
  return 0;

}

int main() {
 
 ifstream inFile;
 ofstream outFile;
 int num;
 int x = 1;

 inFile.open("number.txt");
 if (!inFile) {
  cout << "error opening infile";
  return 1;
 }
 outFile.open("result.txt");
 if (!outFile) {
  cout << "error opening outfile";
  return 1;
 }

 inFile >> num;
 outFile <<recur(num,x);

 return 0;
}
  
 