#include <iostream>

using namespace std;

bool isNum() {

    string c;

    cin >> c;

    for (int i = 0; i < c.length(); i++) {

        if (c[i]>47 && c[i]<57) {

           continue;}

           else return false;

        }

    return true;

}

int main() {

    cout << "Enter a value: ";

    if (isNum()) {

        cout << "The input is numeric." << endl;

    } else {

        cout << "The input is not numeric." << endl;

    }

    return 0;

}


