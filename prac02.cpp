#include <iostream>
using namespace std;

bool isOperator(char c) {
    char op[] = {'+', '-', '*', '/', '%', '='};
    for (int i = 0; i < 6; i++) {
        if (c == op[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;

    bool found = false;

    for (int i = 0; i < input.length(); i++) {
        if (isOperator(input[i])) {
            cout << "operator: " << input[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No operators found." << endl;
    }

    return 0;
}

