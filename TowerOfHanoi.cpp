#include <iostream>
#include <conio.h>
using namespace std;

void towerOfHanoi(int n, char from, char to, char mid)
{
    if (n == 0)
        return;
    towerOfHanoi(n - 1, from, mid, to);
    cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
    towerOfHanoi(n - 1, mid, to, from);
}

int main()
{
    cout << "Enter the number of disk: ";
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    cout << "Tower of Hanoi Completed...";
    getch();
    return 0;
}
