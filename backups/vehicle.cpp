#include <iostream>

using namespace std;
class Vehicle{

private:
double speed;
int wheels;

public:
Vehicle(){
  speed=0;
  wheels=0;
}
Vehicle(double s,int w){
  setspeed(s);
  setwheels(w);
}
void setspeed(double s){
  if(s>=0)
  speed = s;
  else{
    speed = 0;
  }
}
int getspeed(){
  return speed;
}
void setwheels(int w){
  if(w>=2)
  wheels = w;
  else{
    wheels = 4;
  }
}
int getwheels(){
  return wheels;
}
};

int main(){
  Vehicle car(4,5);
  cout<<car.getspeed()<<" "<<car.getwheels()<<endl;
  car.setspeed(3);
  cout<<car.getspeed()<<" "<<car.getwheels()<<endl;
  car.setwheels(4);
  cout<<car.getspeed()<<" "<<car.getwheels()<<endl;
}