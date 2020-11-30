 /*#include <iostream>

 using namespace std;

int main(){
    char* cp;
    cp = nullptr;

    int x;
    cout<<"Enter number of elements";
    cin >>x;

    cp= new char[10]; 
    for(int i = 0; i < 10;i++)
    *(cp+i) = ' ';*/


#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the number of grades ";
  cin >> number;
	//int grades[10];		// array of ints size 10
	int* gp;			// an int pointer
	int* max;			// an int pointer pointing to the highest value in the array
	int i;				// loop variable
	int offset;			// variable that keeps track of the distance from the beginning of the array
	gp = new int[number];		// gp points to the first element of the array

	cout << "Random Grades are:" << endl;
	for (i = 0; i < 10; i++)
	{
		*(gp+i)= rand() % 101;		// randomly assign an int between 0 and 100 inclusive
		cout << *(gp+i) << endl;		// display the value of each array element.
	}
	max = gp;							// have the max point to the same location as gp (beginning of the array)
	for (offset = 0; offset < number; offset++)			// cycle through the array
	{
		if ( *(gp + offset) > *max)		// if gp+offset is pointing to a location which has a content that is
			max = gp + offset;			// larger than the value stored in the location that max is pointing to
	}									// make max point to the location of the larger value

	cout << "The largest number is: " << *max;	// display the value of the location where max is pointing to
  return 0;
}


  

