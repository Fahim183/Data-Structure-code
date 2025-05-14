#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int size = 1;

    while (size < n)
    {
        for (int i = 0; i < n-size ; i++)
        {
            if (a[i] > a[i + 1])
            {                     // Swapping without using swap() function
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        size++;
    }

    cout << "Ascending Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
