//imports
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//end of inports

int main()
{
  do{
    //variable init
    int x;
    int guess;
    int guesses = 0;
    char playAgain = n;
    // end of variable init
    srand(time(NULL));//sets random seed
    x = rand() % 101;//creates random number between 0 and 100 and sets x to value
    cout << "Welcome! Try to guess the number between 0 and 100" << endl;
    do {
      guesses++;// add 1 to guess
      cin >> guess;//allow user to input a number
      if(guess < x){//is guess more than random value
	cout << "Your guess is to low" << endl;
      }
      else if(guess > x){//is guess less than random value
	cout << "Your guess is too high" << endl;
      }
    }while(guess != x);//repeat code until user guesses the number correctly
    cout << "You guessed the correct number! You won!" << endl;
    cout << "It took you " << guesses << " tries to get the correct number" << endl;//prints out # of tries it took for user to guess
    cout << "Do you want to play agian (y or n)?";
    cin >> playAgain;
  }while (playAgain = 'y');
  cout << "Thanks for playing";
}
