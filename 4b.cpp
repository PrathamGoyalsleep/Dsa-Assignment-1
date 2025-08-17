#include <iostream>
using namespace std;
void mul(int mat1[50][50], int mat2[50][50], int r1, int c1, int r2, int c2)
{
    int res[50][50] = {0};
    // asumming max sixe to be 50
    for (int i = 0; i < r1; i++)
    {

        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r2; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {

        for (int j = 0; j < c2; j++)
        {
            cout << res[i][j] << " ";
        }
    }
}

int main()
{
    int r1, c1, r2, c2;
    cout << "enter first matrix row and column";
    cin >> r1 >> c1;
    cout << "enter second matrix row and column";
    cin >> r2 >> c2;
    int mat1[50][50];
    int mat2[50][50];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    if (c1 != r2)
    {
        cout << "incorrect matrix";
        exit(0);
    }
    mul(mat1, mat2, r1, c1, r2, c2);
    return 0;
}