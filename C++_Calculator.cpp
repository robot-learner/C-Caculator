#include <iostream>

using namespace std;

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}

int main() {
    cout << "Select operation." << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << endl;\n\n    int choice;\n    cin >>"}`&#8203; choice;

    float num1, num2;
    cout &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter first number: \";\n    cin >>"}`&#8203; num1;
    cout &#8203;`oaicite:{"index":2,"invalid_reason":"Malformed citation << \"Enter second number: \";\n    cin >>"}`&#8203; num2;

    if (choice == 1) {
        cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    } else if (choice == 2) {
        cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
    } else if (choice == 3) {
        cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
    } else if (choice == 4) {
        cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
    } else {
        cout << "Invalid input" << endl;
