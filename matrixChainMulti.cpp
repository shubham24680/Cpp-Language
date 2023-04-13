#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

int MatrixChainMultiplication(int a[], int i, int j)
{
    if (i == j)
        return 0;
    int k, count, mini = INT_MAX;

    for (k = i; k < j; k++)
    {
        count = MatrixChainMultiplication(a, i, k) + MatrixChainMultiplication(a, k + 1, j) + a[i - 1] * a[k] * a[j];
        mini = min(count, mini);
    }

    return mini;
}

int main()
{
    int n = 5;
    int a[n];

    cout << "Input: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "\nMinimum number of possible multiplications is "
         << MatrixChainMultiplication(a, 1, n - 1);
    getch();
    return 0;
}
