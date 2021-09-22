#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

  //Game setup
  int number = 0; //Random number that needs to be guessed
  int guess = 0; //Users guess
  int tries = 0; //Guess attempts
  char playagain;

  //Generate the first random number
  srand(time(NULL)); 
  number = rand()% 100 + 1;
  
  bool running = true;

  while (running == true) {//Game start \ loop
    cout << "Enter a number 0 to 100.\n";
    cin >> guess;

    if (guess > number) {//Guess is too high
      cout << "Guess is too high. ";
      tries++;
    }

    if (guess < number) {//Guess is too low
      cout << "Guess is too low. ";
      tries++;
    }  

    if (guess == number) {//Correct guess
      tries++;
      cout << "You guessed the correct number!";
      cout << " It took you: ";
      cout << tries;
      cout << " tries to guess the correct number.";
      cout << " Would you like to play again? y/n \n";
      cin >> playagain;

      if (playagain == 'y') {//Resetting the game
	srand(time(NULL));
	number = rand()% 100 + 1;
	tries = 0;
	running = true;
      }
      else {//Game end
	running = false;
      }
      
    }
  }
}
