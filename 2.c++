#include <bits/stdc++.h>
using namespace std;
void f(int arr[], int n)
{
    int pos;
    for (int i = 0; i <= (n - 2); i++)
    {
        for (int j = i + 1; j <= (n - 1); j++)
        {
            if (arr[i] == arr[j])
            {
                pos = j;
                for (int s = pos; s < n; s++)
                {
                    arr[s] = arr[s + 1];
                }
                n--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f(arr, n);
    return 0;
}