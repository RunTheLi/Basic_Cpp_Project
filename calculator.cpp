#include <iosream>
#include <cmath>
#include <string>

using namespace std;

int plus(int a, int b){
    return a + b;
}

int minus(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // or handle differently
    }
    return a / b;
}

int main(){
    int a, b;
    char op;

    cout << "Enter the number u want to calculate" << endl;

    cout << "first number";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "second number";
    cin >> b;

    if (op == '+') {
    cout << "Result: " << add(a, b) << endl;
        } 
    else if (op == '-') {
    cout << "Result: " << subtract(a, b) << endl;
        } 
    else if (op == '*') {
    cout << "Result: " << multiply(a, b) << endl;
        } 
    else if (op == '/') {
    cout << "Result: " << divide(a, b) << endl;
        } 
    else {
    cout << "Invalid operator!" << endl;
        }

    cout << "Result: " << result << endl;

    return 0;
}