#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);
const double EVAL = exp(1.0);

//basic arithematic using double
double add(double a, double b){ return a + b; }
double sub(double a, double b){ return a - b; }
double mul(double a, double b){ return a * b; }

bool safe_divide(double a, double b, double out) {
    if (b == 0) {
        return false;  // Cannot divide by zero
    } else {
    out = a / b;
        return true;
    }
}

bool parseOperand(const string &s, double &out) {
    if (s == "pi" || s == "PI" || s == "Pi") { out = PI; return true; }
}