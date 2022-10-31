#include <iostream>
#include <conio.h>
using namespace std;

int linearSearch(int a[], int n, int x)
{
    static int i = 0;
    if (i == n)
        return -1;
    if (a[i] == x)
        return i;
    i++;
    return linearSearch(a, n, x);
}

int main(int argc, char const *argv[])
{
    cout << "Enter the Array length: ";
    int n, i, x, index;
    cin >> n;
    cout << "Enter the Array elements: ";
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element you want to search: ";
    cin >> x;
    index = linearSearch(a, n, x);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";
    getch();
    return 0;
}
