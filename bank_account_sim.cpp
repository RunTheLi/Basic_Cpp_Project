#include <iostream>
#include <string>
#include <cctype> 
#include <cmath>

using namespace std;

bool isNumber(const string &s){
    for(char ch : s){
        if(!isdigit(ch)) return false;
    }
    return true;
}

void chooseChoice(int choice, int &balance){
    
    if (choice == 1) {
        int deposit;
        cout << "Deposit: ";
        cin >> deposit;
        balance += deposit;
        cout << "You have deposited: " << deposit << endl;
    }  
    else if (choice == 2) {
        int withdraw;
        cout << "Withdraw: ";
        cin >> withdraw;
        if (withdraw > balance){
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= withdraw;
            cout << "You have withdrawn: " << withdraw << endl;
        }
    } 
    else if (choice == 3) {
        cout << "Your account balance: " << balance << endl;
    } 
    else if (choice == 4) {
        cout << "Exiting program..." << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }
}

int main () {
    int balance = 0;
    int choice;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        chooseChoice(choice, balance);

    } while (choice != 4);

    return 0;
}