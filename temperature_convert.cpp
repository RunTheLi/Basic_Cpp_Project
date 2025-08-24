#include <iostream>
#include <string>
#include <cctype> 
#include <cmath>

using namespace std;

bool isNumber(const string &s){
    for( char ch : s ) {
        if (!isdigit(ch)) return false;
    }
    return true;
}

float celToFah(float c){
    return (c * 9 / 5) + 32; 
}

float fahToCel (float fah){
    return (fah - 32) * 5 / 9;
}

void chooseChoice(int choice){
    float value;

    if (choice == 1){
        cout << "Enter Celsius: ";
        cin >> value;
        cout << value << " Celsius = " << celToFah(value) << " Fahrenheit" << endl;
    } else if (choice == 2){
        cout << "Enter Fahrenheit: ";
        cin >> value;
        cout << value << " Fahrenheit = " << fahToCel(value) << " Celsius" << endl;
    } else {
        cout << "Invalid number!" << endl;
    }

}

int main (){
    string input;
    cout << "Please Choose the converter u want to convert: " << endl;
    cout << "1 is celsius convert to fahrenheit: " << endl;
    cout << "2 is fahrenheit convert to celsius: " << endl;
    cin >> input;

    if(!isNumber(input)) {
        cout << "please enter the number only!" << endl;
        return 1;
    }

    int choice = stoi(input); // convert string -> int
    chooseChoice(choice);

    return 0;
}