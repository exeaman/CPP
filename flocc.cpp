#include <bits/stdc++.h>
using namespace std;
// for the first occurencee
int firstocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    // find the first and last occ of an element in an array;
    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr, n, i + 1, key);
}

// for the last occourance

int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restarr = lastocc(arr, n, i + 1, key);
    if (restarr != -1)
    {
        return restarr;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int i = 0;
    int key = 2;
    int n = 22;
    int arr[] = {4, 2, 1, 2, 5, 6, 8, 4, 2, 5, 7, 9, 4, 2, 5, 8, 4, 1, 3, 6, 54, 7};
    cout << firstocc(arr, 22, 0, 2) << endl;
    cout << lastocc(arr, 22, 0, 2);
    return 0;
}
// array
// seacrchingg
// sorting
