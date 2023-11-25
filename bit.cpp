#include<bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}
int main()
{
    cout<<getBit(14,3)<<endl;
    cout<<getBit(14,2)<<endl;
    cout<<getBit(14,1)<<endl;
    cout<<getBit(14,0)<<endl;
    return 0;
}