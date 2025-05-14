#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int value;
    cin >> value;

    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == value)
        {
            result = mid;
            break;
        }
        else if (a[mid] > value)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (result == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at index " << result << endl;
    }

    return 0;
}

