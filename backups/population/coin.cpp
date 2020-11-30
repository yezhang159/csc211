#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Coin{
  private:
    string sideUp;
  public:
    Coin(){
      toss();
         
    }
    void toss(){
      srand(time(NULL));
      int num=rand()%2;
      if(num==1){
        sideUp="head";
      }
      else{
        sideUp="tail";
      }
    }
    string getSideUp(){
      return sideUp;
    }
};
int main(){
    Coin quarter;
    cout<<quarter.getSideUp()<<" "<<endl;
  return 0;
}
