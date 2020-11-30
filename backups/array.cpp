#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
        const int ROW=10;
        const int COL=10;
        void disgrid(char g[][COL]){

        int i;
        int j;
        for(i=0;i<ROW;i++){
            for(j=0;j<COL;j++)
                cout<<g[i][j]<<" ";
                cout<<endl;
            }
            
        }
        void fillgrid(char g[][COL],char fillchar){
            for(int i=0;i<ROW;i++)
                for(int j=0;j<COL;j++)
                g[i][j]=fillchar;
        }
        void crossgrid(char c[][COL],char fillchar){
            for(int i=0;i<ROW;i++)
                for(int j=0;j<COL;j++)
                c[i][j]=fillchar;
        }
                
int main(){
    /*int grades[20];
        srand(time(NULL));
        for(int i=0; i<20;i++){
        grades[i]=rand()%101;
        cout<<grades[i]<<" "<<endl;
}*/
        /*const int size= 20;
        int max = 0;

        int grade[size];
        for(int i =0;i<size;i++)
        grade[i]=rand()%101;
    
        for(int i =0;i<size;i++)
        cout<<grade[i]<<" "<<endl;

        for(int i =0;i<size;i++)
        if(grade[i]>max)
        max=grade[i];
        cout<<"maxmium is "<< max<< endl;*/
        
        /*string cars[4]={"Volvo","BMW","Ford","Mazda"};
        cars[2]="BMW";
        cout<<cars[2]<<endl;*/
        /*string cars[4]={"Volvo","BMW","Ford","Mazda"};
        for(int i = 0; i < 4; i++){
            cout<<cars[i]<<endl;
        }*/
        
        /*string cars[4]={"Volvo","BMW","Ford","Mazda"};
        for(int i = 0; i < 4; i++){
            cout<<i<<"."<<cars[i]<<endl;
        }*/

        /*string food="Pizza";
        string &meal=food;
        cout<<food<<endl;
        cout<<meal<<endl;*/

        
            char grid[ROW][COL];
            fillgrid(grid,'.');
            disgrid(grid);
            fillgrid(grid,'a');
            disgrid(grid);
            fillgrid(grid,'b');
            disgrid(grid);
            crossgrid(grid,'c');
                    
            
    return 0;
    
}