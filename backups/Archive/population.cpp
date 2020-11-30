#include <iostream>

using namespace std;
class Population{
  private:
    double population;
    double birth;
    double death;
  public:
    Population(){
      population = 100000;
      birth = 8000;
      death = 6000;
    }
    Population(double p,double b,double d){
      setPopulation(p);
      setBirth(b);
      setDeath(d);
    }
    void setPopulation(double p){
      if(p>0){
        population=p;
      }
      else{
        displayErrorMessage();
      }
    }
    double getPopulation(){
      return population;
    }
    void setBirth(double b){
      if(b>0){
        birth=b;
      }
      else{
        displayErrorMessage();
      }
    }
    double getBirth(){
      return birth;
    }
    void setDeath(double d){
      if(d>0){
        death=d;
      }
      else{
        displayErrorMessage();
      }
    }
    void displayErrorMessage(){
      cout<<"invalid number"<<endl;
    }
    double getBirthRate(){
      return birth/population;
    }
    double getDeathRate(){
      return death/population;
    }

};


int main(){

    Population town;
    cout<<town.getBirthRate()<<" "<<town.getDeathRate()<<" "<<endl;
    
    


  return 0;
}