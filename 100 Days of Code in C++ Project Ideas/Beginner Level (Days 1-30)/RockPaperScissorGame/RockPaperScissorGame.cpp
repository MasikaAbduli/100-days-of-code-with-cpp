/* Rock Paper; Scissor Game : A simple game to understand the basics of conditional statements. */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    srand(time(0));
    int choice = rand() % 3;

    if (choice == 0) {
        return "Rock";
    }
    else if (choice == 1) {
        return "Paper";
    }
    else {
        return "Scissors";
    }
}

void playGame(string userChoice, string computerChoice) {
    cout << "Computer chose: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "Good Job ! It's a Tie." << endl;
    }
    else if ((userChoice == "Rock" && computerChoice == "Scissors") ||
        (userChoice == "Paper" && computerChoice == "Rock") ||
        (userChoice == "Scissors" && computerChoice == "Paper")) {
        cout << "Congratulation ! You have won." << endl;
    }
    else {
        cout << "You Have Lost ! Restart the program to play again." << endl;
    }
}

int main() {
    string userChoice;

    cout << "Throw your hand (Rock, Paper, or Scissors): " << endl;
    cin >> userChoice;

    string computerChoice = getComputerChoice();

    playGame(userChoice, computerChoice);

    return 0;
}
