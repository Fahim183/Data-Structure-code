#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Take the size of the array
    int a[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int value;
    cin >> value; // Input the value to search for

    int index = -1; // Initialize index to -1 to indicate "not found"

    for (int i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            index = i; // Update index to the position of the value
            break; // Exit the loop once the value is found
        }
    }

    if (index != -1)
        cout << "Value found at index " << index << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}
