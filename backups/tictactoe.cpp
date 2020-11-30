#include <iostream>

using namespace std;
void display_board();
void player_turn();
bool gameover();

char turn;
bool draw = false;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int main(){
  cout<<"Tic Tac Toe Game"<<endl;
  cout<<"Player 1 [X] --- Player 2 [O]"<<endl;
  turn = 'X';
    while (!gameover()){
      display_board();
      player_turn();
      gameover();
  }
    if(turn =='O' && !draw){
      display_board();
      cout<<"Player 1 [X] wins! Game Over!"<<endl;
    }
    else if(turn == 'X' && !draw){
      display_board();
      cout<<"Player 2 [O] wins! Game Over!"<<endl;
    }
    else{
      display_board();
      cout<<"It's a draw! Game Over!"<<endl;
    }
}
void display_board(){
  cout<<"----------------"<<endl;
  cout<<"    |    |     "<<endl;
  cout<<"  "<<board[0][0]<<" | "<< board[0][1]<<"  |  "<<board[0][2]<<endl;
  cout<<"____|____|_____"<<endl;
  cout<<"    |    |     "<<endl; 
  cout<<"  "<<board[1][0]<<" | "<< board[1][1]<<"  |  "<<board[1][2]<<endl;
  cout<<"____|____|_____"<<endl;
  cout<<"    |    |     "<<endl;
  cout<<"  "<<board[2][0]<<" | "<< board[2][1]<<"  |  "<<board[2][2]<<endl;
  cout<<"    |    |     "<<endl;
}

void player_turn()
{
  int choice;
  int row = 0, column = 0;
  
  if(turn =='X'){
    cout<<"Player 1 turn [X]"<<endl;

  }
  else if(turn == 'O'){
    cout<<"Player 2 turn [O]"<<endl;

  }
  cin>>choice;
  switch(choice){
    case 1: row = 0; column = 0; break;
    case 2: row = 0; column = 1; break;
    case 3: row = 0; column = 2; break;
    case 4: row = 1; column = 0; break;
    case 5: row = 1; column = 1; break;
    case 6: row = 1; column = 2; break;
    case 7: row = 2; column = 0; break;
    case 8: row = 2; column = 1; break;
    case 9: row = 2; column = 2; break;
    default:
    cout<<"You didnt enter a correct number! Try again"<<endl;
    player_turn();

  }
  if(turn == 'X' && board[row][column]!='X' && board[row][column]!='O'){
    board[row][column] = 'X';
    turn = 'O';
  }
  else if (turn == 'O' && board[row][column]!='X' && board[row][column]!='O'){
    board[row][column] = 'O';
    turn = 'X';

  }
  else{
    cout<<"The cell you chose is used! Try again"<<endl;
    player_turn();
  }
}
bool gameover()
{
  for(int i = 0; i < 3;i++){
    if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]))
    {
      return true;
    }
    if((board[0][i] == board[1][i] && board[1][i] == board[2][i]))
    {      
    return true;
    }
}
    if((board[0][0] == board[1][1] && board[1][1] == board[2][2]))
    {
    return true;
    }
    if((board[0][2] == board[1][1] && board[1][1] == board[2][0]))
    {
    return true;
    }
    
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if (board[i][j] != 'X' && board[i][j] !='O')
      {
        return false;

      }
    }
  }
  draw = true;
  return true;
}