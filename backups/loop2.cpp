#include <iostream>
#include <cmath>
using namespace std;
/*void sayHi(string name,int age){
  cout<<"Hello "<< name <<", ";
  cout<< "You are "<< age <<endl;
}*/
  /*double cube(double num){//give a function name cube, and set the number as a double type.
    double result = num * num * num;//cube means a number times itself three times. 
    return result;//return means we finish execute the code inside of the function.
  }*/

  /*int getMax(int num1, int num2){
    int result;
    if(num1 > num2){
      result = num1;
    }
    else{
      result = num2;
    }
    return result;
  }*/
  /*int getMax(int num1, int num2,int num3){
    int result;
    if(num1 >= num2 && num1>= num3){//when num1 is greater than num2 and num3, the num1 is the biggest. 
      result = num1;
    }
  else if (num2 >=num1 && num2>= num3){//when num2 is greater than num1 and num3, the num2 is the biggest.
    result = num2;
  }
  else{
    result = num3;//when both statements are not true, then the num3 is the biggest.
  }
  return result;
  }*/

  /*string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
      case 0:
      dayName = "Sunday";
      break;//to stop the statement if you don't type break, then it will keep checking until it finished.
      case 1:
      dayName = "Monday";
      break;
      case 2:
      dayName = "Tuesday";
      break;
      case 3:
      dayName = "Wednesday";
      break;
      case 4:
      dayName = "Thursday";
      break;
      case 5:
      dayName = "Friday";
      break;
      case 6:
      dayName = "Saturday";
      break;
      default:
      dayName = "Invalid Day Number";
    }
    return dayName;
  }*/

int main(){
  //cout<<"hello world"<<endl;
  
  /*string characterName= "John";
  int characterAge;
  characterAge = 35;
  cout<<"There was a man named "<< characterName <<endl;
  cout<<"He was "<< characterAge << " years old"<<endl;
  characterName="Mike";
  cout<< characterName << " is 40 years old"<<endl;*/

  /*char grade = 'A';
  string phrase = "hello world";
  int age = 50;
  double gpa = 2.3;  
  bool isMale = true;
  cout<< grade <<endl;
  cout<<phrase<<endl;
  cout<< age <<endl;
  cout<< gpa <<endl;
  cout<< isMale<<endl;*/
  
  /*cout<<"hello world\n";
  cout<<"Hello World"<<endl;
  string phrase = "Hello World";
  cout<<phrase<<endl;//it will print out the phrase hello world.
  cout<<phrase.length()<<endl;//it will print out the length of the phrase, which is 11.
  cout<<phrase[0]<<endl;//it will print out the first letter in the phrase because the index is always start from 0.
  phrase[0]='b';//it will change the first letter to b.
  cout<<phrase<<endl;
  cout<<phrase.find("World",0)<<endl;//it will print out the number where the word start, which is 6.
  cout<<phrase.substr(8,3)<<endl;//it will print out the word "rld",bc it starts from index 8 and then keep count 3.
  string phrasesub;
  phrasesub = phrase.substr(8,3);
  cout<<phrasesub<<endl;
  
  cout<<3+7<<endl;
  cout<<5-3<<endl;
  cout<<3*5<<endl;
  cout<<15/3<<endl;
  cout<<10%3<<endl;// this will print out 1 because 10/3 is 3.333, the remainder is 1.
  cout<<10+5*2<<endl;//this will print out 20 because 5*2 first, is 10 and then +10 is =20.
  cout<<(10+4)*3<<endl;//this will print out 42 because 10+4 first is 14 and * 3 is 42.*/
  
  /*int wnum = 5;
  double dnum = 5.5;
  wnum++;//++ means add 1. 
  wnum--;// -- means subtract 1.
  wnum +=80;// += means add 80.
  wnum -=15;//-= means subtract 15.
  wnum *=2;// *= means multiply 2.
  wnum /=5;// /=means divide 5.
  cout<<10/3<<endl;//this will return 3, because they both are integers, so it will return integers.
  cout<<10.0/3.0<<endl;//this will return 3.33333, bc they both are decimal numbers, so it will return decimal numbers.
  cout<<10/2.1<<endl;//this will return 4.7619, bc there is one decimal number, so it will return decimal number.
  cout<<wnum<<endl;*/

  /*cout<<pow(2,5)<<endl; // this is the power, 2^5=32.
  cout<<pow(3,4)<<endl; 
  cout<<sqrt(36)<<endl; //this is square root, which is 6.
  cout<<sqrt(25)<<endl; 
  cout<<round(4.3)<<endl; // this is round number, 4.3 round to 4.
  cout<<round(4.6)<<endl;
  cout<<ceil(4.1)<<endl; //this is round higher, if 4.1 it will be 5. 
  cout<<floor(4.8)<<endl;//this is round lower, if 4.8 it will be 4.
  cout<<fmax(3,10)<<endl;// this will tell us which number is bigger.
  cout<<fmin(3,1)<<endl;// this will tell us which number is smaller.*/

  /*int age; 
  cout<<"please enter your age :"<<endl; // let the user enter an age.
  cin >> age;//the computer receive the message from the user and it will store the message. 
  cout<<"You are "<< age << " years old"<<endl;// it will print out the user enter's age.*/

  /*string name; 
  cout<<"please enter your name :"<<endl;//let the user enter the name.
  getline(cin, name);//get the whole line text from user.
  cout<<"hello "<< name<<endl;//it will print out the user types in the name.*/

  /*int num1, num2; //declare two numbers.
  cout<<"Enter first number:"<<endl;//let the user enter the number.
  cin >> num1;//get the information from the user and the computer stores the number.
  cout<<"Enter second number:"<<endl;//let the user enter the number.
  cin >> num2;//get the information from the user and the computer stores the number.
  cout<<num1+num2<<endl;//add them together.*/
  
  /*string color, pluralNoun, celebrity;
  cout<<"Enter a color: ";//let the user enter a color.
  getline(cin,color);//get the information from the user and store the information.
  cout<<"Enter a plural noun: ";//let the user enter a plural noun.
  getline(cin,pluralNoun);//get the information from the user and store the information.
  cout<<"Enter a celebrity: ";//let the user enter a celebrity.
  getline(cin,celebrity);//get the information from the user and store the information.
  
  cout<<"Clouds are " << color <<endl;
  cout<<pluralNoun<<" are green"<<endl;
  cout<<"I love "<<celebrity<<endl;*/

  /*int luckyNums[]={1,3,5,7,8,9};//arrays means you want to store more information inside of the variables.
  luckyNums[0] = 17;//this will print out 17 because we modify the number and it will change to 17.
  cout<<luckyNums[0]<<endl;//this will print out the first element in the array, which is 1. 
  int luckyNums2[20];//when you want to store 20 variables, and you don't know what exactly numbers are.
  luckyNums2[15]=100;//gives the element 15 a number.
  cout<<luckyNums2[15]<<endl;//it will print out the number of the element 15.*/

  /*sayHi("Mike",50);//call the function sayhi, and it will print out all the text from the sayhi function.
  sayHi("Tom",40);
  sayHi("Steve",20);*/

  /*double answer = cube(7.0);//get the value and store the number.
  cout<<answer<<endl;*/

  /*bool isMale = true;//if the statement is false, it will not execute the code, but we can add else statement, so the code will be execute.
  bool isTall = false;
  if(isMale && isTall){//(&&) means both need to be true, but if one statement is false, then it's not true.
    cout<<"You are a tall male"<<endl;
  }
  else{
    cout<<"You are not a tall male"<<endl;
  }*/

  /*bool isMale = true;//if the statement is false, it will not execute the code, but we can add else statement, so the code will be execute.
  bool isTall = false;
  if(isMale || isTall){//(||)this means "or".If one statement is true, then it's true, but if both are false, it's false.
    cout<<"You are a tall male"<<endl;
  }
  else{
    cout<<"You are not a tall male"<<endl;
  }*/

  /*bool isMale = false;
  bool isTall = false;

  if(isMale && isTall){
    cout<<"You are a tall male"<<endl;
  }
  else if(isMale && !isTall){
    cout<<"You are a short male"<<endl;
  }
  else if(!isMale && isTall){
    cout<<"You are tall but not a male"<<endl;
  }
  else{
    cout<<"You are not male and not tall"<<endl;
  }*/

  //cout<<getMax(2,10,5)<<endl;

  /*int num1, num2;
  char op; //set a operator
  cout << "Enter first number: "<<endl;//let the user enter the first number.
  cin >> num1;//the program will store the information that the user type.
  cout << "Enter operator: "<<endl;//let the user enter the operator.
  cin >> op;//the program will store the information that the user type.
  cout << "Enter second number: "<<endl;//let the user enter the second number.
  cin >> num2;//the program will store the information that the user type.
  int result; // set a result.
  if(op =='+'){
    result = num1 + num2;//if the user type +, it will add two numbers.
  }
  else if(op == '-'){
    result = num1 - num2;//if the user type -, it will subtract two numbers.
  }
  else if(op == '*'){
    result = num1 * num2;//if the user type *, it will mutiply two numbers.
    }
  else if(op == '/'){
    result = num1 / num2;//if the user type /, it will divide two numbers.
  }
  else{
    cout<<"Invalid operator";//if the user didn't type any above operators, then it's invalid operator.
  }
  cout<< result<<endl;*/

  //cout<<getDayOfWeek(10)<<endl;//switch statement.
  int index = 1;
  while(){}



  return 0;
}