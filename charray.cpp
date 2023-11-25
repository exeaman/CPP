// longest word in a character array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int cur = 0;
    int max = 0;
    int st = 0;
    int maxst = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (cur > max)
            {
                max = cur;
                maxst = st;
            }
            cur = 0;
        }
        else
        {
            cur++;
            st = i+1;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << max << endl;
    for (int i = 0; i < max; i++)
    {
        cout << arr[i + maxst];
    }
    return 0;
}