#include <iostream>

using namespace std;

bool isComment(string s) {

    if (s[0] == '/' && s[1] == '/') {
        return true;
    }
    if (s[0] == '/' && s[1] == '*') {
        return true;
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a line: ";
    cin >> input;
    if (isComment(input)) {
        cout << "This is a comment line." << endl;
    } else {
        cout << "This is not a comment line." << endl;

    }

    return 0;

}


