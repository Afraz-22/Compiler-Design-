#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    int sum = 0;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    double average = (double)sum / size;
    cout << "Average: " << average << endl;
    return 0;
}


