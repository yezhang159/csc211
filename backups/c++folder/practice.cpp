#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;
  //#define Day 7 usually use in the up of the file start 
/*int add(int num1,int num2){
    int sum= num1 + num2;
    return sum;
}*/
void swap(int num1,int num2){
  cout<<"change before:" <<endl;
  cout<<"num1 = "<< num1 << endl;
  cout<<"num2 = "<< num2 <<endl;
  int temp=num1;
  num1 = num2;
  num2 = temp;
  cout<<"change after:"<<endl;
  cout<<"num1 = " << num1 << endl;
  cout<<"num2 = " << num2 << endl;
}

int main(){
  int a = 10;
  int b = 20;
  swap(a,b);
  /*int a=10;
  int b=20;
  int c= add(a,b);
  cout<<"c = "<< c << endl;
  a = 100;
  b = 500;
  c = add(a,b);
  cout<<"c = "<< c << endl;*/

  //cout << "Hello World" << endl;
  // this means comment in one line 
  /* this means comments 
  in more than one line, like a paragraph*/
  //variable grammar: type variable = beginning number
  //example int a = 10; 
  // cout << "a = " << a << endl;

  
  //cout << "a week has:" << Day <<" "<< "days" << endl; this means can't change
 
  //const int month = 12;
  
  //cout <<"a year has:" << month<<" " << "months" << endl;

  //keyword for example, int is a type, and it can't be the name of the variable. 
  // such as int int = 10; this is incorrect. 

  //int abc= 10;
  //int _abc = 20;
  //int _123abc = 30;
  //int 123abc = 40; this is incorrect, because the number can't be the first letter 
  //int aaa = 100;
  //cout << aaa << endl;
  // int aaa = 200;
  // cout << AAA << endl; this is incorrect, because AAA is undefined, needs to be careful in capital letters

  //int num1 = 10; 
  //int num2 = 20;
  //int sum = num1 + num2; 
  // cout << sum << endl; give the variable a specific name, let the user know what's the variable do. 

  // integer 
  //1. short integer 
  //short num1 = 10;
  //2. integer        
  //int  num2 = 20;
  //3. long integer    
  //long num3 = 30;
  //4. long long integer  
  //long long num4 = 40;
  
  //cout << " num1 = " << num1 << endl; 
  //cout << " num2 = " << num2 << endl;
  //cout << " num3 = " << num3 << endl;
  //cout << " num4 = " << num4 << endl;

  //integer: short(2) int(4) long(4) long long (8)
  // we can use sizeof to get the data type storage
  //grammar: sizeof(data type / variable)
  // short num1 = 10;
  // cout << "short storage space is: " << sizeof(short) << endl;
  // int num2 = 20;
  // cout << "int storage space is : " << sizeof(int) << endl;
  //long num3 = 30;
  //cout << "long storage space is: "<< sizeof(long) << endl;
  //  long long num4 = 40;
  //  cout << "long long storage space is :" << sizeof(long long) << endl;

  //short num1 = 10;
  // cout << "short storage space is: " << sizeof(num1) << endl;
  // 1.float
  // 2.double
  //when you type a number with decimal, it will appear 6 numbers.

  //float f1 = 3.14f;

  //cout << "f1 = " << f1 <<endl;
  
  //double d1 = 3.14;
  //cout << "d1 = " << d1 << endl;
 // cout <<"float storage space is :"<< sizeof(float)<< endl; //4
 // cout <<"double storage space is :"<<sizeof(double)<<endl; //8
 // float f2 = 3e2; // 3*10^2
 // cout << "f2 = " << f2 << endl;
 // float f3 = 3e-2;// 3*0.1^2
 // cout << "f3 = " << f3 << endl;
  //char ch = 'a';
  //cout << ch << endl;
  //cout<< "char storage space is:" << sizeof(char)<<endl;
  //char ch2 = "b"; this is not correct, because we cannot use "".
  //char ch2 = 'abcdef'; this is not correct, because we only can put one letter.
  //cout << (int)ch << endl; letter a will comes out a number which is 97.
  //a-97
  //A-65
  //cout << "hello world\n"; this means start a new line.
  //cout << "\\"<< endl; two \\ will come out one \.
  //cout << "aaaa\thelloworld"<< endl;
  //cout <<"aa\thelloworld"<<endl;
  //cout <<"aaaaaa\thelloworld"<<endl;
  //\t means tab, also it makes the word comes out equally.
  //char str[] = "hello world";
  //cout << str << endl;
  //string str2 = "hello world";
  //cout << str2 << endl;
  //bool flag = true;
  //cout << flag << endl;
  //flag = false; 
  //cout << flag << endl;
  //cout << "bool storage space is :" << sizeof(bool) << endl;
  //int a = 0;
  //cout << "please give an integer a a value:" << endl;
  //cin >> a;
  //cout << "integer a = " << a << endl;

  //float f = 3.14f;
  //cout<< "please give the float f a value:" << endl;
  //cin >> f;
  //cout << "float f = " << f << endl;
  

  //char ch = 'a';
  //cout << "please give char ch a value: "<<endl;
  //cin >> ch;
  //cout << "char ch= "<< ch << endl;

  //string str = " hello ";
  //cout << "please give string str a value: "<< endl;
  //cin >> str;
  //cout << "string str =" << str << endl;

  //bool flag = false;
  //cout << "please give bool flag a value:" << endl;
  //cin >> flag; //bool type if it's not 0, so it's true.
  //cout<< "bool flag= "<< flag << endl;
  
  //int a1 = 10;
  //int b1 = 3;
  //cout << a1 + b1  << endl;
  //cout << a1 - b1 << endl;
  //cout << a1 * b1 << endl;
  //cout << a1 / b1 <<endl;

  //int a2 = 10;
  //int b2 = 20;
  //cout << a2 / b2 << endl;

  //int a3 = 10;
  //int b3 = 0;
  //cout << a3 / b3 << endl; // this is not correct, because  it can't divide by zero.

  //double d1 = 0.5;
  //double d2 = 0.22;
  //cout << d1 / d2 << endl;

  //int a1 = 10;
  //int b1 = 3;
  //cout << a1 % b1 << endl;

  //int a2 = 10;
  //int b2 = 20;
  //cout << a2 % b2 << endl;

  //int a3 = 10;
  //int b3 = 0;
  //cout << a3 % b3 << endl; this is not correct, because it can't divide by zero.

  //double d1= 3.14;
  //double d2= 1.1;
  //cout << d1 % d2 << endl; this is not correct, because the two numbers with decimal can't divide each other.

  //int a = 10;
  //++a;
  //cout << "a = " << a << endl;

  //int a2 = 10;
  //int b2 = ++a2 * 10; 
  //cout << "a2 = " << a2 << endl;
  //cout << "b2 = " << b2 << endl;

  //int a3 = 10;
  //int b3 = a3++ *10;
  //cout << "a3 = "<< a3 << endl;
  //cout << "b3 =" << b3 << endl;

  //int a = 10;
  //a = 100;
  //cout << "a = "<< a <<endl;
  
  //a=10;
  //a+=2;
  //cout << "a = "<< a <<endl;
  
  //a=10;
  //a*=2;
  //cout << "a = "<< a << endl;

  //a=10;
  //a/=2;
  //cout << "a = " << a << endl;

  //a=10;
  //a%=2;
  //cout << "a = "<<a<< endl;

  //int a = 10;
  //int b = 20;
  //cout << (a==b)<<endl;
  //cout << (a!=b)<<endl;
  //cout << (a>b)<<endl;
  //cout << (a<b)<<endl;
  //cout << (a>=b)<<endl;
  //cout << (a<=b)<<endl;
  
   //int a = 10;
   //cout << !a <<endl; 
  
   //int a = 10; 
  // cout << !!a <<endl;

  // a = 10;
  //int b = 10;
  //cout << (a&&b) << endl; true, both statement are true, so it's true.


  //int a= 0;
  //int b= 10;
  //cout << (a&&b) << endl; false, one of the statement is not true, so it's false.

  //int a = 0;
  //int b = 0;
  //cout << (a&&b) <<endl;  false, because both statement are false, so it's false.

  //int a = 10;
  //int b = 10;
  //cout << (a||b) << endl;

 // int c = 0;
 // int d = 10;
 // cout << (c||d) << endl;

 // int e = 0;
 // int f = 0;
 // cout << (e||f) << endl;

 //   int score = 0;
 //   cout << "please enter a score: " << endl;
 //   cin >> score;
 //   cout << "the score you enter is: " << score << endl;
 //   if(score > 600){

 //     cout << "congratulation"<< endl;
 //   }

 // int score = 0; 
 // cout << "please enter a score" <<endl;
 // cin >> score;
 // cout << "the score you enter is :" << score<< endl;
 // if (score > 600){
 //   cout << "congratulation" << endl;
    
 // }
//else{

 // cout <<"sorry you didn't pass"<<endl;

//}
  
//  int score = 0;
//  cout << "please enter a score" <<endl;
//  cin >>score;
//  cout << "the score you enter is: " << score <<endl;
//  if (score > 600){
 //   cout << "congratulation, you are first tier university" <<endl;

 // }
//else if (score > 500) {
//  cout << "congratulation, you are second tier university" <<endl;

//}
//else if (score >400){
//  cout << "congratulation, you are third tier university" <<endl;

//}
//else {
  //cout << "sorry, you didn't pass" <<endl;
//}

  //int score = 0;
  //cout << "enter a score" <<endl;
  //cin >> score;
  //cout << "the score you enter is :" << score << endl;
  //if (score > 600){
    //cout << "congratulation, you are first tier university" <<endl;
     // if (score > 700){
       // cout << "congratulation, you are going to Beijing university" <<endl;
     // }
       // else if (score >650){
         // cout <<"congratulation, you are going to Tsinghua university"<<endl;
       // }
        //else{
         // cout << "congratulation, you are going to Renmin university" <<endl;
       // }
      
  //}
  //else if (score >500){
    //cout << "congratulation, you are second tier university" <<endl;

  //}
  //else if (score > 400){
   // cout << "congratulation, you are third tier university" <<endl;

  //}
  //else {
    //cout << "sorry, you didn't pass" <<endl;

  //}
  //int num1=0;
  //int num2=0;
  //int num3=0;
  //cout << "please enter the weight of piggy a" <<endl;
  /*cin >> num1;
  cout << "please enter the weight of piggy b" <<endl;
  cin >> num2;
  cout << "please enter the weight of piggy c" <<endl;
  cin >> num3;

  cout <<"the weight of piggy a is : "<< num1 << endl;
  cout <<"the weight of piggy b is : "<< num2 << endl;
  cout <<"the weight of piggy c is : "<< num3 << endl;
  if (num1 > num2){
    if (num1 > num3){
      cout <<"piggy a is most heavy piggy" <<endl;
    }
   else{
     cout <<"piggy c is most heavy piggy" <<endl;
  
   }
  }
else {
  if (num2 >num3){
    cout <<"piggy b is most heavy piggy" <<endl;

  }
  else{
    cout << "piggy c is most heavy piggy" <<endl;
  }
}
*/

  //int a = 10;
 // int b = 20;
 // int c = 0;
 // c = (a>b ? a:b);
 // cout << "c = " << c <<endl;

 // (a > b ? a : b )=100;
 // cout << "a = " <<a <<endl;
 // cout << "b = " << b <<endl;

  /*  cout << "please give a score to a movie"<<endl;
    int score = 0;
    cin >> score;
    cout << "the score you enter is : " << score << endl;
    switch(score){
      case 10:
      cout << "you think this movie is classic" << endl;
      break;// exit current statement.
      case 9:
      cout << "you think this movie is classic" << endl;
      break;
      case 8:
      cout << "you think this movie is very good"<<endl;
      break;
      case 7:
      cout <<"you think this movie is very good"<<endl;
      break;
      case 6:
      cout <<"you think this movie is so so" <<endl;
      break;
      case 5:
      cout <<"you think this movie is so so"<<endl;
      break;
      default:
      cout<<"you think this movie is bad"<<endl;
      break;
    }
    */
    /*if and switch difference 
    switch only can be integer or char letter.
    switch structure is more clear.*/

   /* int num = 0;
    while(num<10){
      cout << num << endl;
      num ++;
    }*/
    /*srand((unsigned int)time(NULL));

    int num = rand() % 100 + 1;
    //cout << num << endl;
    int val = 0;
    while (1){
      cin >> val;
    if (val > num){
      cout << "guess wrong, the number is too big" <<endl;
    }
    else if (val < num ){
      cout << "guess wrong, the number is too samll" << endl;

    }
    else {
      cout << "congratulation, the number you guess is correct" << endl;
      break;
    }
    }*/
    //int num = 0;
   // do {
      //cout << num << endl;
      // num ++;

    //} 
    //while (num <10);
   /* int num =100;
    do 
    {
      int a = 0;
      int b = 0;
      int c = 0;

      a = num % 10;
      b = num /10 %10;
      c = num /100;

      if (a*a*a+b*b*b+c*c*c==num){
        cout << num << endl;
      
      }
      num ++;
    } 
    while (num <1000);*/
    //for (int i= 0; i <10; i++){
    //  cout <<i << endl;
   // }
   /*for (int i = 1; i <=100; i++){
     if(i % 7 == 0|| i % 10 == 7 || i / 10 == 7)
     {
       cout << "hit the table" <<endl;
     }
     else {
       cout<< i << endl;
     }
   }*/
  // for (int i = 0; i < 10; i++){
  //   for (int j = 0; j< 10; j++){
  //     cout<<"* ";
      
  //   }
  //   cout<<endl;
  // } 
    
 /*   for (int i = 1; i <=9; i++){
      for (int j = 1; j<=i;j++)
      {
        cout << j << "*" << i << "=" << j*i<< " ";

      }
      cout << endl;
    }*/
   /* cout <<" please choose the level you like "<<endl;
    cout <<" 1.normal " <<endl;
    cout <<" 2.medium "<<endl;
    cout <<" 3.hard  "<<endl;
    int select = 0;
    cin >> select;
    switch(select){
      case 1:
      cout <<"the one you choose is normal level"<<endl;
      break;
      case 2:
      cout<<"the one you choose is medium level"<<endl;
      break;
      case 3:
      cout << "the one you choose is hard level"<<endl;
      default:
      break;
    }*/
    
    /*for (int i = 0; i < 10;i++){
      if (i==5){//if i =5, exit loop.
        break;
      }
      cout << i << endl;
    }*/
   /* for (int i=0; i < 10;i++)
    {
      for(int j=0; j<10;j++)
      {
        if(j==5)
        {
          break;
        }
        cout<< " * ";
      }
      cout<<endl;
    }*/
  
    /*for (int i = 0; i <= 100; i++){
      if(i % 2 ==0){
        continue;
      }
      cout<< i << endl;
    }*/
   /* cout <<"1.xxxx"<<endl;
    cout <<"2.xxxx"<<endl;
    goto FLAG;
    cout <<"3.xxxx"<<endl;
    cout <<"4.xxxx"<<endl;
    FLAG:
    cout<<"5.xxxx"<<endl;*/

    /*int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout <<arr[0]<<endl;*/

    /*int arr2[5]={10,20,30,40,50};
    for (int i=0;i<5;i++){
      cout<<arr2[i]<<endl;
    }*/

    /*int arr3[] = {90,80,70,60,50,40,30,20,10};
    for(int i=0; i<9;i++){
      cout <<arr3[i]<<endl;
    }*/

   /* int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"whole array storage space is:"<<sizeof(arr)<<endl;
    cout<<"each element storage space is: "<<sizeof(arr[0])<<endl;
    cout<<"element number is:"<<sizeof(arr)/sizeof(arr[0])<<endl;

    cout<<"the array address is :"<< arr <<endl;
    cout <<"the first element address is :" <<&arr[0]<<endl;
    cout<<"the second element array address is:"<<&arr[1]<<endl;*/
   
   /*int arr[5]={300,350,200,400,250};
   int max=0;
   for(int i=0;i<5;i++)
   {
     if(arr[i]>max)
    {
      max=arr[i];
    }
   }
    cout<<"the biggest number is "<<max<<endl;*/

    /*int arr[5] = {1,3,2,5,4};
    cout <<"array change before:"<<endl;
    for(int i =0;i<5;i++){
      cout <<arr[i]<<endl;
    }
    int start=0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    while(start<end){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end] = temp;
    start ++;
    end --;
    }
    cout<<"array change after"<<endl;
    for(int i = 0; i <5;i++){
      cout<<arr[i]<<endl;
    }*/

   /* int arr[9] = {4,2,8,0,5,7,1,3,9};
    cout<<"bubble sort:"<<endl;
    for(int i = 0; i<9;i++){
      cout<<arr[i]<<" ";

    }
      cout<<endl;
      for (int i =0;i<9-1;i++){
        for (int j = 0; j<9-i-1;j++)
        {
          if (arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
      }
  
  cout<<"sorted array:"<<endl;
  for (int i = 0; i <9; i++){
    cout<<arr[i]<<" ";
  }
 cout<<endl;*/

/*    int arr[2][3];
    arr[0][0]= 1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6;
    for (int i =0; i<2;i++){
      for (int j=0; j<3;j++){
        cout<<arr[i][j]<<endl;
      }
    }*/
    
    /*int arr2[2][3]={
      {1,2,3},
      {4,5,6}
    };
    for (int i =0; i<2;i++){
      for (int j=0; j<3;j++){
        cout<<arr2[i][j]<<" ";
      }
      cout<<endl;
    }*/
  
   /* int arr3[2][3]={1,2,3,4,5,6};
     for (int i =0; i<2;i++)
     {
      for (int j=0; j<3;j++)
      {
        cout<<arr3[i][j]<<" ";
      }
      cout<<endl;
    }*/
    /*int arr4[][3]={1,2,3,4,5,6};
    for (int i =0; i<2;i++)
     {
      for (int j=0; j<3;j++)
      {
        cout<<arr4[i][j]<<" ";
      }
      cout<<endl;
    }*/
    /*int arr[2][3]= {
      {1,2,3},
      {4,5,6}
    };
    cout<<"array storage space is:"<<sizeof(arr)<<endl;
    cout <<"array first row storage space is "<<sizeof(arr[0])<<endl;
    cout <<"array first element storage space is:"<<sizeof(arr[0][0])<<endl;
    cout <<"array total rows are: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"array total columns are:"<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
    cout<<"array address is :" << (long long)arr << endl;
    cout<<"array first row address is: "<< (long long)arr[0]<<endl;
    cout<<"array second row address is: "<< (long long)arr[1]<<endl;
    cout<<"array first element address is:"<<(long long)&arr[0][0]<<endl;
    cout<<"array second element address is:"<<(long long)&arr[0][1]<<endl;
    */
   /*int scores[3][3]={

     {100,100,100},
     {90,50,100},
     {60,70,80}
   };
   string names[3]={"Tom","Mike","Jason"};
   
   for(int i=0;i<3;i++){
     int sum=0;
     for(int j=0;j<3;j++){
       sum+=scores[i][j];
       
      
     }
     cout<<names[i]<<" total score is: "<<sum<<endl;
   }*/


    
    


  system("pause"); 

  return 0;



  }
  
