#include <iostream>
#include <conio.h>
using namespace std;

void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the array length: ";
    cin >> n;
    int arr[n + 2];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    print(arr, n);

    int a, pos, temp;
    cout << "Enter an element: ";
    cin >> a;
    cout << "Inserting at an end.\n";
    arr[n] = a;
    print(arr, n + 1);

    cout << "Enter an element: ";
    cin >> a;k
    cout << "Enter the position: ";
    cin >> pos;
    cout << "Inserting at a given postion.\n";
    for (int i = pos - 1; i < n + 2; i++)
    {
        temp = arr[i];
        arr[i] = a;
        a = temp;
    }
    print(arr, n + 2);
    getch();
    return 0;
}