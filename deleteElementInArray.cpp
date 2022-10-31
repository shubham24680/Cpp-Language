#include <iostream>
#include <conio.h>
using namespace std;

void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swaps(int arr[], int pos, int end)
{
    for (int i = pos + 1; i < end; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter the array length: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    print(arr, n);

    int a, pos, temp;
    cout << "Enter an element you want to delete from an array: ";
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (a == arr[i])
        {
            swaps(arr, i, n);
            break;
        }
    }
    print(arr, n - 1);

    cout << "Enter the position: ";
    cin >> pos;
    cout << "After deletion: ";
    for (int i = 0; i < n; i++)
    {
        if ((pos - 1) == i)
        {
            swaps(arr, i, n);
            break;
        }
    }
    print(arr, n - 2);
    getch();
    return 0;
}