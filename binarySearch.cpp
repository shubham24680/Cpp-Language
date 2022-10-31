#include <iostream>
#include <conio.h>
using namespace std;

int binarySearch(int a[], int beg, int end, int x)
{
    if (beg <= end)
    {
        int mid = beg + (end - beg) / 2;
        if (a[mid] == x)
            return mid;
        return (a[mid] > x) ? binarySearch(a, beg, mid - 1, x) : binarySearch(a, mid + 1, end, x);
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    cout << "Enter the Array length: ";
    int n, i, x, index;
    cin >> n;
    cout << "Enter the sorted Array elements: ";
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element you want to search: ";
    cin >> x;
    index = binarySearch(a, 0, n - 1, x);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";
    getch();
    return 0;
}
