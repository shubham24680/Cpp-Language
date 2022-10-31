#include <iostream>
#include <conio.h>
using namespace std;

void bubbleSort(int a[], int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < (len - 1) - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int change = a[j];
                a[j] = a[j + 1];
                a[j + 1] = change;
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
    bubbleSort(a, n);
    cout << "Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    getch();
    return 0;
}
