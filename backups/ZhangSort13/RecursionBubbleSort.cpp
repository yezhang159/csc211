#include <iostream> 
using namespace std; 

void recurbubbleSort(int arr5[], int a) 
{ 
    
    if (a == 1) 
        return; 
  
    
    for (int i=0; i<a-1; i++) 
        if (arr5[i] > arr5[i+1]) 
            swap(arr5[i], arr5[i+1]); 
  
    
    recurbubbleSort(arr5, a-1); 
} 

void fun3(int arr5[], int a) 
{ 
    for (int i=0; i < a; i++) 
        cout<<arr5[i]<<" "; 
    cout<<endl; 
} 
  

int main() 
{ 
    int arr5[] = {50, 22, 23, 12, 27, 9, 70}; 
    int a = sizeof(arr5)/sizeof(arr5[0]); 
    recurbubbleSort(arr5, a); 
    cout<<"Sorted array is:"<<endl; 
    fun3(arr5, a); 
    return 0; 
} 