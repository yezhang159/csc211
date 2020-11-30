#include <iostream>
#include <string>
using namespace std;
//1.#define 通常在文件上方定义，表示一个常量，不可以修改
//#define Day 7

int main(){

  //cout << "hello world" << endl; this means to show the "hello world" on the screen.
  
  //变量创建的语法： 数据类型 变量名 = 变量初始值；
  /*int a = 10;
  cout << "a = "<< a << endl;*/
 
  //cout<<"a week has "<< Day << " days"<< endl;
  //const int month = 12;
  //month = 24; 报错，常量是不可以修改的
  //cout<<"a year has " << month << " months" << endl;

  //不要用关键词给变量或者常量起名称
  //int int = 10; 错误，第二个int是关键词，不可以作为变量的名称

  //标识符命名规则
  //1.标识符不可以是关键词
  //2.标识符是由字母，数字，下划线构成
  //3.标识符第一个字符只能是字母或下划线
  //4.标识符是区分大小写
  //1.标识符不可以是关键词 
  //int int = 10;
  //2.标识符是由字母，数字，下划线构成
  //int abc = 10;
  //int _abc = 20;
  //int _123abc = 30;
  //3. 标识符第一个字符只能是字母或者下划线
  //int 123abc = 40;
  //4.标识符区分大小写
  //int aaa = 10;
  //cout<< AAA << endl;错误，因为上面定义的小写的a, 而不是大写的a 
  //cout<< aaa << endl;
  //建议：给变量起名对时候，最好能够做到见名知意
  //int num1 = 10;
  //int num2 = 20;
  //int sum = num1 + num2; 
  //cout << sum << endl;

  //整型
  //1.短整型
  //short num1 = 10;
  //2.整型
  //int num2 = 20;
  //3.长整型 
  //long num3 = 30;
  //4. 长长整型 
  //long long num4 = 40;
  /*cout<< num1 <<endl;
  cout<< num2 <<endl;
  cout<< num3 <<endl;
  cout<< num4 <<endl;*/
  //整型：short(2) int(4) long(4) longlong(8)
  //可以利用size of求出数据类型占用内存大小
  //语法：sizeof（数据类型/变量）
    /*short num1 = 10;
    cout<< "short storage space is: "  << sizeof(num1) << endl;
    int num2 = 10;
    cout<< "int storage space is: " << sizeof(num2) << endl;
    long num3 = 10;
    cout<< "long storage space is: " << sizeof(num3) << endl;
    long long num4 = 10;
    cout<< "long long storage space is: " << sizeof(num4) << endl;

    //整型大小比较
    //short < int <= long <= long long*/

    //1.float
    //2.double
    //默认情况下 输出一个小数，会显示出6位有效数字
    //float f1 = 3.1415926f;
    //cout<< "f1  = " << f1 << endl;
    //double d1 = 3.1415926;
    //cout<< "d1 = " << d1 << endl;
    //统计float和double 占用内存空间
    //cout<<"float storage space is :" << sizeof(float)<< endl;//4字节
    //cout<<"double storage space is :" << sizeof(double)<< endl;//8字节
    //科学计数法
    //float f2 = 3e2; //3*10^2
    //cout<< "f2= "<< f2 << endl;
    //float f3 = 3e-2; //3*0.01^2
    //cout<< "f3 = "<< f3 <<endl;
   
    //1.字符型变量创建方式
    //char ch = 'A';
    //cout << ch << endl;
    //2.字符型变量所占内存大小
    //cout << "char storage is :" << sizeof(char) << endl;
    //3.字符型变量常见错误
    //char ch2 = "b";//创建字符型变量时候，要用单引号
    //char ch3 = 'abcdef';//创建字符型变量时候，单引号内只能有一个字符
    //4.字符型变量对应ascii编码
    //cout << (int)ch << endl;
   
    //转义字符
    //1.换行符 \n
    //cout << "hello world\n";
    //2.反斜杠 
    //cout << "\\" << endl;
    //3.水平制表符 \t 作用是可以整齐输出数据 
    //cout << "aaa\thelloworld"  << endl;
    //cout << "aa\thelloworld"  << endl;
    //cout << "a\thelloworld"  << endl;

    //1.c风格字符串
    //注意事项 char 字符串名 [] 
    //注意事项2 等号后面  要用双引号 包含起来字符串
    //char str[]= "hello world" ;
    //cout << str << endl;
    //2.c++风格字符串
    //包含一个头文件 #include <string> 
    //string str2 = "hello world";
    //cout<< str2 << endl;
    
    //1.创建bool数据类型
    /*bool flag = true;//true 代表真 
    cout<< flag << endl; // true 代表真
    flag = false; 
    cout<< flag << endl;// false 代表假 
    //本质上  1代表真  0代表假

    //2.查看bool类型所占内存空间 
    cout<< "size of bool is : " << sizeof(bool) << endl;*/

    //1.整型
    int a = 0; 
    cout << "please enter a number for int a: " << endl;
    cin >> a;
    cout <<"int a = "<< a << endl;

  system("pause");
  return 0;

}