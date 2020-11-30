#include <iostream>
#include <algorithm>
using namespace std;
int large (int arr[],int size){
  return arr[size-1];
}

int func(int arr1[],int size1, int num){
int l,r,mid;
l=0;
r=size1-1;
mid=(r+l)/2;

 while (l<=r){
   if(arr1[mid]<num){
     l=mid+1;
   }
   else if(arr1[mid]==num){
     cout<<"found ";
     return mid;
   }
   else{
     r=mid-1;
   }
  mid=(r+l)/2;
 }
 if(l>r){
   cout<<"not found "<<endl;
 }
    return -1;
}


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


void swap2(int *xp2, int *yp2)  
{  
    int temp = *xp2;  
    *xp2 = *yp2;  
    *yp2 = temp;  
}  
  
void selectionSort(int arr4[], int y)  
{  
    int i, j, min_index,count=0;  
  
    for (i = 0; i < y-1; i++)  
    {  
        min_index = i;  
        for (j = i+1; j < y; j++)  
        if (arr4[j] < arr4[min_index])  
            min_index = j;  

        swap2(&arr4[min_index], &arr4[i]);  
        count++;

        
    }  
    cout<<"the number of swap is:"<<count<<endl;
}  
  

void fun2(int arr4[], int size4)  
{  
    int i;  
    for (i=0; i < size4; i++)  
        cout << arr4[i] << " ";  
    cout << endl;  
}  
  
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
 int a[3]={3,4,5};
 int size =3;
 

  cout<<"largest number is: " <<large(a,size);
  cout<<endl;


  int arr1[6]={10,20,30,40,50,60};
  int size1=6;
  int num =30;

cout<<func(arr1,size1,num)<<endl;


int arr2[] = { 2, 3, 4, 10, 40 }; 
    int x = 9;
    int size2 = sizeof(arr2) / sizeof(arr2[0]); 
    int result = search(arr2, size2, x); 
  cout<<"the number in the array is closet to the given number is: " <<result<<endl;

int arr3[] = {50, 22, 23, 12, 27, 9, 70};  
    int n = sizeof(arr3)/sizeof(arr3[0]);  
    bubbleSort(arr3, n);  
    cout<<"Sorted array is:" <<endl;  
    fun(arr3, n);  

     int arr4[] = {3, 12, 2, 60, 7};  
    int y = sizeof(arr4)/sizeof(arr4[0]);  
    selectionSort(arr4, y);  
    cout << "Sorted array is:"<<endl;  
    fun2(arr4, y); 

    int arr5[] = {50, 22, 23, 12, 27, 9, 70}; 
    int b= sizeof(arr5)/sizeof(arr5[0]); 
    recurbubbleSort(arr5, b); 
    cout<<"Sorted array is:"<<endl; 
    fun3(arr5, b); 

    int arr6[] = {3, 12, 2, 60, 7}; 
    int c = sizeof(arr6)/sizeof(arr6[0]); 
    
    recurSelectionSort(arr6, c); 
  cout<<"Sorted array is:"<<endl;
    for (int i = 0; i<c ; i++) 
    cout << arr6[i] << " "; 
    cout << endl; 

  system("pause");
 return 0;
}