#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string rps(int ans) {
    if (ans == 1) return "Rock";
    else if (ans == 2) return "Paper";
    else if (ans == 3) return "Scissors";
    return "Invalid";
}

int main (){
    int ansOne, ansTwo;

    int playerOneScore = 0;
    int playerTwoScore = 0;
    int round = 0;

    cout << "Rock Paper Scissors Game (Best of 5)" << endl;
    cout << "1 = Rock, 2 = Paper, 3 = Scissors" << endl;

    while (round < 3 && playerOneScore < 3 && playerTwoScore < 3) {

        cout << "\nRound " << (round + 1) << endl;

        cout << "Player One: ";
        cin >> ansOne;

        cout << "Player Two: ";
        cin >> ansTwo;

        cout << "Player One chose " << rps(ansOne) << endl;
        cout << "Player Two chose " << rps(ansTwo) << endl;

    if ( ansOne == ansTwo){
        cout << "Its a tie" << endl;
    }
    else if (( ansOne == 1 && ansTwo == 3 ) || 
        ( ansOne == 2 && ansTwo == 1 ) ||
        ( ansOne == 3 && ansTwo == 2 )) {
        cout << "Player One win" << endl;
        playerOneScore++;
    } else {
        cout << "Player Two win" << endl;
        playerTwoScore++;
    }
    round++;
        cout << "Score -> Player One: " << playerOneScore 
             << " | Player Two: " << playerTwoScore << endl;
    }

    cout << "\n=== Game Over ===" << endl;
    if (playerOneScore > playerTwoScore) {
        cout << "🏆 Player One is the Champion!" << endl;
    } else if (playerTwoScore > playerOneScore) {
        cout << "🏆 Player Two is the Champion!" << endl;
    } else {
        cout << "It's a Draw!" << endl;
    }

        return 0;
}
    
