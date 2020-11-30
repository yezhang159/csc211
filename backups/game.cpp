#include <iostream>

using namespace std;

int check(int arr[3][3]) {
  for(int i = 0; i<3; i++){
    bool isRowEqual = true;
    for(int j = 0; j<3; j++){
      if(j > 0 && arr[i][j] != arr[i][j-1]) {
        isRowEqual = false;
      }
    }
    if(isRowEqual) {
      return arr[i][0]; //same row winner
    }
  }

  for(int j = 0; j<3; j++) {
    bool isColEqual = true;
    for(int i = 0; i < 3; i++) {
      if(i > 0 && arr[i][j] != arr[i-1][j]){
        isColEqual = false;
      }
    }
    if(isColEqual) {
      return arr[0][j]; //same col winner
    }
  }

  for(int i = 0; i< 3; i++){
    bool isDiagonal = true;
    for(int j = 1; j>0; j--) {
      if(arr[i][j+1] != arr[i][j]){
        isDiagonal = false;
      }
    }
  }
  return 0; //no results
  return 1; //player 1 wins;
  return 2; //player 2 wins;
  return 3; //all spots are filled, draw.
}

int main(){
  int arr[3][3] = {
    {0,0,0},
    {0,0,0},
    {0,0,0}
  };
  
  int currentPlayer = 1;

  int inputCol, inputRow;
  while(check(arr) > 0) { //end game condition
    cout << "col: ";
    cin >> inputCol;
    cout << "Row: ";
    cin >> inputRow;

    if (arr[inputCol][inputRow] == 0) {
      arr[inputCol][inputRow] = currentPlayer;
      currentPlayer = currentPlayer == 1 ? 2 : 1;
    } else {
      cout << "try again" << endl;
    }
  }

  return 0;
}