#include <iostream> 
using namespace std; 
  
int search(int arr2[], int size2, int x) 
{ 
    int i; 
    int diff=abs(arr2[0]-x);
    for (i = 0; i < size2; i++) 
    {
        if (arr2[i] == x) 
            return arr2[i]; 
        else {
          if(diff>abs(arr2[i]-x)){
            diff=abs(arr2[i]-x);
          }
        }
    }
    
    return diff +x;
} 
  
int main(void) 
{ 
    int arr2[] = { 2, 3, 4, 10, 40 }; 
    int x = 9;
    int size2 = sizeof(arr2) / sizeof(arr2[0]); 
    int result = search(arr2, size2, x); 
  cout<<"the number in the array is closet to the given number is: " <<result<<endl;


  
  system("pause");
     return 0; 
} 