#include <bits/stdc++.h>
using namespace std;

void transpose(int arr[50][50], int r, int c)
{
    int res[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            res[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[50][50];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    transpose(arr, r, c);
    return 0;
}