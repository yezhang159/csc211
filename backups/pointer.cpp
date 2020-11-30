#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    /*int grade;
    int grade2;
    int * gradeptr;
    grade = 75;
    gradeptr = &grade;
    *gradeptr = *gradeptr+1;
    cout<< *gradeptr << endl;
    //cout<<&grade<<endl;//the address of the grade.*/

    /*char c;
    c = 'A';
    char* cp;
    char** cpp;
    cp=&c;
    cpp=&cp;
    cout<<"value of c is "<<c<<endl;
    cout<<"value of *cp is "<<*cp<<endl;
    cout<<"value of **cp is "<<*cpp<<endl;*/

    int grades[10];
    int i;
    int *gp;
    int *max_number;
    srand(time(NULL));

    for(i = 0;i < 10; i++){
      grades[i] = rand() % 101;
      gp = grades;
      max_number = grades;
    }
      
    for(i = 0;i < 10; i++){
      if (*(gp+i) > *max_number){
          max_number = (gp+i);
          
      }
      cout<<"the max number is "<<*max_number << endl;
    }
  return 0;
}