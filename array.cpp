// Purpose: To find the largest and smallest element in an array
/*
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "element at index " << i << " is " << arr[i] << endl;
    }
    int a = INT_MIN;
    int b = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        a=max(a,arr[i]);
        b=min(b,arr[i]);
    }
    cout << "the largest element is " << a << endl;
    cout << "the smallest element is " << b << endl;

    return 0;
}


// max and min in an array;
// Path: c%2B%2B/array.cpp
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "element at index " << i << " is " << arr[i] << endl;
    }
    int a = INT_MIN;
    int b = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        a = max(a, arr[i]);
        b = min(b, arr[i]);
    }
    cout << "the largest element is " << a << endl;
    cout << "the smallest element is " << b << endl;

    return 0;
}
// binary search

#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int n, int key)
{
    int mid = (n / 2);
    if (key == arr[mid])
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        for (int i = 0; i < mid; i++)
        {
            if (key == arr[i])
            {
                return i;
            }
        }
    }
    else if (key > arr[mid])
    {
        for (int i = (mid+1); i <n; i++)
        {
            if (key == arr[i])
            {
                return i;
            }
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int l=6;
    cout << "no. of elements : " << endl;
    cin >> l;
    int arr[l]={2,3,4,5,6,7};
    for (int i = 0; i <= l-1; i++)
    {
        cout<<"enter the element at index "<<i<<endl;
        cin >> arr[i];
    }
    int ky;
    cout << "what no. do you wanna find : " << endl;
    cin >> ky;
    cout << binSearch(arr, l, ky) << endl;
    return 0;
}

// selection sort

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// bubble sort
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/

// insertion sort

