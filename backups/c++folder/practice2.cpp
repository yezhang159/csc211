/*#include <iostream>

using namespace std;



class Republic{

private:

string name;

int bananas;

double price;

public:

Republic(){
}

string getName(){

return name;
}

void setName(string n) {
name = n;
}

int getBananas(){
return bananas;
}

void setBananas(int b){
bananas = b;
}

double getPrice(){
return price;
}

void setPrice(double p){
price = p;
}

double profit(){
return getBananas()*getPrice();
}

};

void swap(Republic *xp, Republic *yp)
{

Republic temp = *xp;
*xp = *yp;
*yp = temp;
}

void sortRepublic(Republic *arr, int size){
int i, j;
for (i = 0; j < size-1; i++)
for (j =0; j < size-i-1; j++)
if (arr[j].getPrice() < arr[j+1].getPrice())
swap(&arr[j],&arr[j+1]);

}

int main(){

string name;
int bananas;
double price;
Republic rep[10];
for(int i = 0; i<10;i++){
cin >> name >> bananas >> price;
rep[i].setName(name);

rep[i].setBananas(bananas);

rep[i].setPrice(price);

}

sortRepublic(rep,10);

for(int i =0; i < 10; i++){

cout << rep[i].getPrice() << " ";
}

return 0;
}*/
// C++ program for implementation of Bubble sort  
#include <iostream> 
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
  
}  
   
void  bubbleSort(int arr[], int n)  
{  
    int i, j, count=0;
    for (i = 0; i < n-1; i++)      
  
    for (j = 0; j < n-i-1; j++) 
    { 
        if (arr[j] > arr[j+1]) 
        {
            swap(&arr[j], &arr[j+1]); 
            count++;
        }
    }
    cout<< "number of swap "<<count<<endl;
            
}  
  

void fun(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
 
int main()  
{  
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array is:" <<endl;  
    fun(arr, n);  
    return 0;  
}