#include <bits/stdc++.h>
using namespace std;
void sum(int arr[50][50], int r, int c, int row, int col)
{
    int rowsum = 0;
    int colsum = 0;
    for (int i = 0; i < c; i++)
    {
        rowsum = rowsum + (arr[row][i]);
    }
    for (int i = 0; i < r; i++)
    {
        colsum = colsum + (arr[i][col]);
    }
    cout << "the sum of row is :" << rowsum;
    cout << "the sum of column is :" << colsum;
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
    int row, column;
    cout << "enter the row and column you want sum" << endl;
    cin >> row >> column;
    sum(arr, r, c, row, column);
    return 0;
}