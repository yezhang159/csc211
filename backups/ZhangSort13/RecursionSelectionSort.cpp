#include <iostream> 
using namespace std; 
   
int min_index(int arr6[], int i, int j) 
{ 
    if (i == j) 
        return i; 
    int k = min_index(arr6, i + 1, j); 
    return (arr6[i] < arr6[k])? i : k; 
} 
  

void recurSelectionSort(int arr6[], int c, int index = 0) 
{ 
   
    if (index == c) 
       return; 
    int k = min_index(arr6, index, c-1); 
    if (k != index) 
       swap(arr6[k], arr6[index]); 

    recurSelectionSort(arr6, c, index + 1); 
} 
  
 
int main() 
{ 
    int arr6[] = {3, 12, 2, 60, 7}; 
    int c = sizeof(arr6)/sizeof(arr6[0]); 
    
    recurSelectionSort(arr6, c); 
  cout<<"Sorted array is:"<<endl;
    for (int i = 0; i<c ; i++) 
    cout << arr6[i] << " "; 
    cout << endl; 
    return 0; 
} 