/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	long offset;	// To hold an offset amount
	long numBytes;	// To hold the file size
	char ch;		// To hold a character
	char again;		// To hold Y or N

	// Open the file for input.
	fstream file("letters.txt", ios::in);

	// Determine the number of bytes in the file.
	file.seekg(0L, ios::end);
	numBytes = file.tellg();
	cout << "The file has " << numBytes << " bytes.\n";

	// Go back to the beginning of the file.
	file.seekg(0L, ios::beg);

	// Let the user move around within the file.
	do
	{
		// Display the current read position.
		cout << "Currently at position " << file.tellg() << endl;

		// Get a byte number from the user.
		cout << "Enter an offset from the beginning of the file: ";
		cin >> offset;

		// Move the read position to that byte, read the
		// character there, and display it.
		if (offset >= numBytes)	// Past the end of the file?
			cout << "Cannot read past the end of the file.\n";
		else
		{
			file.seekg(offset, ios::beg);
			file.get(ch);
			cout << "Character read: " << ch << endl;
		}

		// Does the user want to try this again?
		cout << "Do it again? ";
		cin >> again;
	} while (again == 'Y' || again == 'y');

	// Close the file.
	file.close();
	return 0;
}*/

/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;	// To hold a character

	// Open the file for input.
	fstream file("letters.txt", ios::in);

	// Move to byte 5 from the beginning of the file
	// (the 6th byte) and read the character there.
	file.seekg(0L, ios::beg);
	//file.get(ch);
  int fsize = file.tellg();
  for(int i = fsize; i>=0; i--){
  file.seekg(i,ios::end); 
  file.get(ch);
  }
  for(int i=-1L; i>=0L;i--)
	cout << "Byte 5 from beginning: " << ch << endl;

	// Move to the 10th byte from the end of the file
	// and read the character there.
	file.seekg(-10L, ios::end);
	file.get(ch);
	cout << "10th byte from end: " << ch << endl;

	// Move to byte 3 from the current position
	// (the 4th byte) and read the character there.
	file.seekg(3L, ios::cur);
	file.get(ch);
	cout << "Byte 3 from current: " << ch << endl;

	file.close();
	return 0;
}*/
#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;

int main()
{
   int count;                       // Loop counter
   const int NUM_DIVISIONS = 4;     // Number of divisions
   Budget divisions[NUM_DIVISIONS]; // Array of Budget objects

   // Get the budget requests for each division.
   for (count = 0; count < NUM_DIVISIONS; count++)
   {
      double budgetAmount;
      cout << "Enter the budget request for division ";
      cout << (count + 1) << ": ";
      cin >> budgetAmount;
      divisions[count].addBudget(budgetAmount);
   }

   // Display the budget requests and the corporate budget.
   cout << fixed << showpoint << setprecision(2);
   cout << "\nHere are the division budget requests:\n";
   for (count = 0; count < NUM_DIVISIONS; count++)
   {
      cout << "\tDivision " << (count + 1) << "\t$ ";
      cout << divisions[count].getDivisionBudget() << endl;
   }
   cout << "\tTotal Budget Requests:\t$ ";
   cout << divisions[0].getCorpBudget() << endl; 

   return 0;
}