#include <iostream>
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_index,count=0;  
  
    for (i = 0; i < n-1; i++)  
    {  
        min_index = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_index])  
            min_index = j;  

        swap(&arr[min_index], &arr[i]);  
        count++;

        
    }  
    cout<<"the number of swap is:"<<count<<endl;
}  
  

void fun(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
int main()  
{  
    int arr[] = {3, 12, 2, 60, 7};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array is:"<<endl;  
    fun(arr, n);  
    return 0;  
}  
  