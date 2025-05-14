#include <iostream>
using namespace std;

int main() {
    int n; // Number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[100]; // Assuming a maximum size of 100 for the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int value; // Value to be inserted at the beginning
    cout << "Enter the value to insert at the beginning: ";
    cin >> value;

    // Shift elements to the right
    for (int i = n - 1; i >= 0; i--) {
        a[i + 1] = a[i];
    }
    // Insert the new value at the beginning
    a[0] = value;
    // Update the size of the array
    n++;

    // Print the updated array
    cout << "Updated array:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

