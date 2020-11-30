#include <iostream>
#include <cmath>


using namespace std;

int main(){

srand(time(0));
int choose;
float rand1;
float rand2;
rand1=rand()%10;
rand2=rand()%10;


float ans;
  cout << "what do you want to practice?"<<endl;
  cout<<"1. float division"<<endl;
  cout<<"2. square root"<<endl;
  cout<<"3. raise a number to a power"<<endl;

  cin>>choose;
  if(choose==1){

    
    cout<< "What is " <<rand1 << " divide by " <<rand2<<endl;
    cin>>ans;

    if(ans==rand1/rand2&&rand2!=0){
      cout<<"correct"<<endl;
    }
    else{
      cout<<"incorrect" << endl;
    }
  }
  else if (choose ==2){
    
    cout<< "what is " << rand1 <<" square root" << endl;
    cin >>ans;
    if(ans==sqrt(rand1)){
      cout<< "correct "<<endl;

    }
    else{
      cout<<"incorrect"<<endl;

    }
  }
  else if (choose ==3){
    
    cout<<"what is "<< rand1 << "number to a power"<<endl;
    cin >> ans;
    if(ans==pow(rand1, 2)){
      cout<< "correct"<<endl;

    }
    else 
    cout<<"incorrect"<<endl;
  }
  else return 0;


  return 0; 
}