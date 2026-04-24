#include <iostream>

using namespace std;

int lineSearch(int array[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int size = 30;
    int array[size];
    int number;

    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << "Please enter value: ";
    cin >> number;

    int result = lineSearch(array, size, number);

    if (result != -1) {
        cout << "Index: " << result << endl;
    }
    else {
        cout << "Not found" << endl;
    }
}
