#include <iostream>
#include <conio.h>
using namespace std;

int partion(int a[], int beg, int end)
{
    int pivot = a[end], i = beg - 1, j, change;
    for (j = beg; j <= end; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            change = a[i];
            a[i] = a[j];
            a[j] = change;
        }
    }
    change = a[i + 1];
    a[i + 1] = a[end];
    a[end] = change;
    return (i + 1);
}

void quickSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int p = partion(a, beg, end);
        quickSort(a, beg, p - 1);
        quickSort(a, p + 1, end);
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
    quickSort(a, 0, n - 1);
    cout << "Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    getch();
    return 0;
}
