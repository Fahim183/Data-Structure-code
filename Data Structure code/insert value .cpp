#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[n + 1]; // Increase size to accommodate one more element
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int value;
    cout << "Enter the value to insert at the end: ";
    cin >> value;

    a[n] = value; // Insert the value at the last position
    n++; // Increase the array size

    cout << "Updated array:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

