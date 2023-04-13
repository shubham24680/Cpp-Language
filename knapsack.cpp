#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapSack(int W, int wt[], int c[], int n)
{

    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, c, n - 1);
    else
        max(c[n - 1] + knapSack(W - wt[n - 1], wt, c, n - 1), knapSack(W, wt, c, n - 1));
}

int main()
{
    int c[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(c) / sizeof(c[0]);
    cout << "The total profit made by thief using DP is "<< knapSack(W, wt, c, n);
    getch();
    return 0;
}

// struct Assets
// {
//     int cost, weight;
//     Assets(int cost, int weight)
//     {
//         this->cost = cost;
//         this->weight = weight;
//     }
// };

// static bool compare(struct Assets x, struct Assets y)
// {
//     double r1 = (double)x.cost / (double)x.weight;
//     double r2 = (double)y.cost / (double)y.weight;
//     return r1 > r2;
// }

// double fractionalKnapsack(int W, struct Assets a[], int n)
// {
//     sort(a, a + n, compare);

//     double profit = 0.0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i].weight <= W)
//         {
//             W -= a[i].weight;
//             profit += a[i].cost;
//         }
//         else
//         {
//             profit += a[i].cost * ((double)W / (double)a[i].weight);
//             break;
//         }
//     }

//     return profit;
// }

// int main()
// {
//     int W = 50;
//     Assets a[] = {{60, 10}, {100, 20}, {120, 30}};
//     int n = sizeof(a) / sizeof(a[0]);
//     cout << "The total profit made by theif is " << fractionalKnapsack(W, a, n);
//     getch();
//     return 0;
// }
