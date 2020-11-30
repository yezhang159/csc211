#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void checkAnswers(char, char, int&);
bool isValidInput(char);

int main() {
  const int questions = 20;
  int correctAnswersCount = 0;
  char answers[questions] = {'A','D','B','B','D',
                              'B','A','B','C','D',
                              'A','C','D','B','D',
                              'C','C','A','D','B'};
  char input;

  for(int i = 0; i < questions; i++){
    cout << "question " << i+1 << ": ";
    cin >> input;
    if (isValidInput(input)) {
      checkAnswers(input, answers[i], correctAnswersCount);
    } else {
      cout << "invalid input" << endl;
      return 0;
    }
  }
  if(correctAnswersCount >= 15){
    cout<<"You pass the exam"<<endl;
  }
  else{
    cout<<"You fail the exam"<<endl;
  }
  
  return 0;
}

void checkAnswers(char input, char answer, int& count) {
  if(input == answer) {
    count ++;
  }
}

bool isValidInput(char input) {
  if(input == 'A' || input == 'B' || input == 'C' || input == 'D') {
    return true;
  } else {
    return false;
  }
}
