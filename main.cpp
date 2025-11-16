#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("D:\\New folder (4)\\compiler design lab\\New folder\\C lab\\sample text\\raz.txt");
    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    string word;

    while (file >> word) {
        string token = "";

        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];

            if (ch == '"') {
                string strConst = "\"";
                i++;
                while (i < word.length() && word[i] != '"') {
                    strConst += word[i];
                    i++;
                }
                strConst += "\"";
                cout << "Token: " << strConst << " -> CONSTANT" << endl;
                continue;
            }


            if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' ||
                ch == ';' || ch == ',' || ch == '(' || ch == ')' ||
                ch == '{' || ch == '}') {

                if (token != "") {

                    if (token[0] >= '0' && token[0] <= '9') {
                        cout << "Token: " << token << " -> CONSTANT" << endl;
                    }

                    else if (token == "int" || token == "float" || token == "if" ||
                             token == "else" || token == "while" || token == "for") {
                        cout << "Token: " << token << " -> KEYWORD" << endl;
                    }
                    else {
                        cout << "Token: " << token << " -> IDENTIFIER" << endl;
                    }
                    token = "";
                }

                if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=') {
                    cout << "Token: " << ch << " -> OPERATOR" << endl;
                } else {
                    cout << "Token: " << ch << " -> PUNCTUATION" << endl;
                }
            }
            else {
                token += ch;
            }
        }

        if (token != "") {
            if (token[0] >= '0' && token[0] <= '9') {
                cout << "Token: " << token << " -> CONSTANT" << endl;
            }
            else if (token == "if else" || token == "where" || token == "if" ||
                     token == "else" || token == "while" || token == "for") {
                cout << "Token: " << token << " -> KEYWORD" << endl;
            }
            else {
                cout << "Token: " << token << " -> IDENTIFIER" << endl;
            }
        }
    }
    return 0;
}
