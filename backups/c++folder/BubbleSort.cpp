#include <iostream> 
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
  
}  

void  bubbleSort(int arr3[], int n)  
{  
    int i, j, count=0;
    for (i = 0; i < n-1; i++)      
  
    for (j = 0; j < n-i-1; j++) 
    { 
        if (arr3[j] > arr3[j+1]) 
        {
            swap(&arr3[j], &arr3[j+1]); 
            count++;
        }
    }
    cout<< "number of swap is: "<<count<<endl;
            
}  
  

void fun(int arr3[], int size3)  
{  
    int i;  
    for (i = 0; i < size3; i++)  
        cout << arr3[i] << " ";  
    cout << endl;  
}  
  
 
int main()  
{  
    int arr3[] = {50, 22, 23, 12, 27, 9, 70};  
    int n = sizeof(arr3)/sizeof(arr3[0]);  
    bubbleSort(arr3, n);  
    cout<<"Sorted array is:" <<endl;  
    fun(arr3, n);  
    system("pause");
    return 0;  
}