#include <iostream>

using namespace std;
class Circle{ 

private:
double radius;

public:
Circle(){
  radius=0;
} 
Circle(double r){
  radius=r;
}
double getRadius(){
  return radius;
}
void setRadius(double r){
  if(r>=0)
  radius = r;
  else{
    radius = 0;
  }
}
double getArea(){
  return  3.14 * radius * radius;
  }

};
int main(){
  Circle basketball(10);
  Circle tennisball(basketball.getRadius()-5);
  Circle baseball(-1);
  cout<<basketball.getArea()<<" "<<tennisball.getArea()<<baseball.getArea()<<endl;

}