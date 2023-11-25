// print all the subarrays of an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the " << i << "th element: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<arr[k]<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
Problem : In an array determine the length of the longest
arithmetic subarray of integers.
Arithmetic array is an array that contains at least
two integers and the differnce between consecutive array is same.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    << endl;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the " << i << "th element: ";
        cin >> arr[i];
    }
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}
*/
