#include <iostream>
#include <conio.h>
using namespace std;

void selectionSort(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] > a[j])
            {
                int change = a[i];
                a[i] = a[j];
                a[j] = change;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    cout << "Enter array length: ";
    int n, i;
    cin >> n;
    cout << "Enter elements of array: ";
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    selectionSort(a, n);
    cout << "Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    getch();
    return 0;
}
