#include <iostream>
using namespace std;

int i, j, u, m, n, k;
int main(int argc, char const *argv[])
{
    cout << "Enter no. of Row: ";
    cin >> m;
    cout << "Enter no. of Column: ";
    cin >> n;
    int real1[m][n], img1[m][n];
    cout << "Enter first Matrix: " << endl;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> real1[i][j] >> img1[i][j];

    cout << "Enter no. of Column: ";
    cin >> k;
    int real2[n][k], img2[n][k];
    cout << "Enter second Matrix: " << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
        {
            cin >> real2[i][j];
            cin >> img2[i][j];
        }

    int mul_real[m][k], mul_img[m][k], real, img;
    for (i = 0; i < m; i++)
        for (j = 0; j < k; j++)
        {
            real = 0;
            img = 0;
            for (u = 0; u < n; u++)
            {
                real += ((real1[i][u] * real2[u][j]) - (img1[i][u] * img2[u][j]));
                img += ((real1[i][u] * img2[u][j]) + (img1[i][u] * real2[u][j]));
            }
            mul_real[i][j] = real;
            mul_img[i][j] = img;
        }

    cout << "Resultant Matrix: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < k; j++)
            if (mul_img[i][j] >= 0)
                cout << mul_real[i][j] << "+" << mul_img[i][j] << "i";
            else
                cout << mul_real[i][j] << mul_img[i][j] << "i";
        cout << endl;
    }
    return 0;
}