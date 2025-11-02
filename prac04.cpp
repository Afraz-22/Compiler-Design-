#include <iostream>
using namespace std;
bool isValidIdentifier(string str) {
    if (str == "") {
        return false;
    }
    char firstChar = str[0];
    if ((firstChar >= 'A' && firstChar <= 'Z') || (firstChar >= 'a' && firstChar <= 'z') || firstChar == '_') {
        for (int i = 1; i < str.length(); i++) {
            char currentChar = str[i];
            if (!((currentChar >= 'A' && currentChar <= 'Z') ||
                  (currentChar >= 'a' && currentChar <= 'z') ||
                  (currentChar >= '0' && currentChar <= '9') ||
                  currentChar == '_')) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isValidIdentifier(input)) {
        cout << input << " is a valid identifier." << endl;
    } else {
        cout << input << " is not a valid identifier." << endl;
    }
    return 0;
}


