#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string gpa(int score) {
    if (score < 50) {
        return "F";
    } else if (score >= 50 && score < 60) {
        return "D";
    } else if (score >= 60 && score < 70) {
        return "C";
    } else if (score >= 70 && score < 80) {
        return "B";
    } else {
        return "A";
    }
}

int main (){

    int score;

    cout << "Please Enter your Score: " << endl;
    cin >> score;

    cout << "Your GPA is: " << gpa(score) << endl;

    return 0;
}