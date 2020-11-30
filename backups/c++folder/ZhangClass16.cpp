#include <iostream>
#include <string>
using namespace std;
class broom {
public:
  broom();//constructor
  void setName(string n){name=n;}
  void setSpeed(int s){speed=s;}
  void setAlt(int a){alt=a;}
  string getName(){return name;}
  int getSpeed(){return speed;}
  int getAlt(){return alt;}
  int distance(int dis){
    return dis/speed;
  }
  ~broom();//de
private:
  string name;
  int speed;
  int alt;
}broom1;


int main(){
broom myBroom;
string name = "joe";
myBroom.setName(name);
myBroom.getName();
myBroom.distance(50);

  return 0;
}