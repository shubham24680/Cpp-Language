#include <iostream>
#include <conio.h>
using namespace std;

void insertionSort(int a[], int len)
{
    int i, p, j;
    for (i = 1; i < len; i++)
    {
        p = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > p)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = p;
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
    insertionSort(a, n);
    cout << "Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    getch();
    return 0;
}
