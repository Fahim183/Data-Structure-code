#include<iostream>
using namespace std;

int main()
{
    int n, i, value;
    cout << "Enter value element: ";
    cin >> n;
    int arr[n];
    cout << "value :";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter value to replace last element: ";
    cin >> value;
    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            arr[i] = value;
        }
    }

    cout << "Modified array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

