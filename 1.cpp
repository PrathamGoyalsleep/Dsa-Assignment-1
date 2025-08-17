#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag=1;
    while (flag == 1) {
    int n, size = 0, c, arr[100], pos, b,poss,posss;
    cout << "1.CREATE" << endl;
    cout << "2.DISPLAY" << endl;
    cout << "3.INSERT" << endl;
    cout << "4.DELETE" << endl;
    cout << "5.LINEAR SEARCH" << endl;
    cout << "6.EXIT" << endl;

    cout << "enter the switch case";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "enter the size";
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        break;
    case 2:
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " " << endl;
        }
        break;
    case 3:
        cout << "enter the position" << endl; // right shift foe insert
        cin >> pos;
        cout << "enter the value";
        cin >> b;
        if (pos > size || pos < 0 || pos > 100)
        {
            cout << "invalid";
        }
        for (int i = size; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = b;
        size++;
        break;
    case 4:
        cout << "enter the element to be deleted" << endl;
        cin >> c;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == c)
            {
                posss = i;
            }
        }
        for (int i = posss; i < size; i++)
        {
            arr[i] = arr[i + 1]; // left shift for delete
        }
        size--;
        break;
    case 5:
        cout << "tell the element to be search" << endl;
        cin >> c;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == c)
            {
                poss = i;
            }
        }

        cout << poss << endl;
        break;
    case 6:
        cout << "exit programm";
  flag=0;
        break;
      
    }
    }
    return 0;
}





