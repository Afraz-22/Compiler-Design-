#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isValidIdentifier(string str) {
    if (str == "") {
        return false;
    }
    char firstChar = str[0];
    if ((firstChar >= 'A' && firstChar <= 'Z') ||
        (firstChar >= 'a' && firstChar <= 'z') ||
        firstChar == '_') {
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
    ifstream file("D:\\New folder (4)\\compiler design lab\\New folder\\C lab\\sample text\\raz.txt");

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;


    while (getline(file, line)) {
        cout << "Given line: " << line << endl;


        if (isValidIdentifier(line)) {
            cout << line << " is a valid identifier." << endl;
        } else {
            cout << line << " is not a valid identifier." << endl;
        }
    }

    file.close();
    return 0;
}
