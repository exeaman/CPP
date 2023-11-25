/*write a program to find the unique no. in
array which does not appear in array twice.
*/

#include<bits/stdc++.h>
using namespace std;
int xor_Sum(int arr[], int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++)
    { 
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main()

{
    int x[]={1,2,3,4,1,2,3};
    cout<<xor_Sum(x,7);
    return 0;
}