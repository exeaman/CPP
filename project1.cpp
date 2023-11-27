#include<bits/stdc++.h>
using namespace std;
void digital(int n){
    switch (n)
    {
    case 0:
        cout<<"* * *"<<endl<<"*   *"<<endl<<"*   *"<<endl<<"*   *"<<endl<<"* * *"<<endl<<endl;
        /* code */
        break;
    case 1:
        cout<<"    *"<<endl<<"    *"<<endl<<"    *"<<endl<<"    *"<<endl<<"    *"<<endl<<endl;
        break;
    case 2:
        cout<<"* * *"<<endl<<"    *"<<endl<<"* * *"<<endl<<"*    "<<endl<<"* * *"<<endl<<endl;
        /* code */
        break;
    case 3:
        cout<<"* * *"<<endl<<"    *"<<endl<<"* * *"<<endl<<"    *"<<endl<<"* * *"<<endl<<endl;
        /* code */
        break;
    case 4:
        cout<<"*   *"<<endl<<"*   *"<<endl<<"* * *"<<endl<<"    *"<<endl<<"    *"<<endl<<endl;
        /* code */
        break;
    case 5:
        cout<<"* * *"<<endl<<"*    "<<endl<<"* * *"<<endl<<"    *"<<endl<<"* * *"<<endl<<endl;
        /* code */
        break;
    case 6:
        cout<<"* * *"<<endl<<"*    "<<endl<<"* * *"<<endl<<"*   *"<<endl<<"* * *"<<endl<<endl;
        /* code */
        break;
    case 7:
        cout<<"* * *"<<endl<<"*   *"<<endl<<"*   *"<<endl<<"    *"<<endl<<"    *"<<endl<<endl;
        /* code */
        break;
    case 8:
        cout<<"* * *"<<endl<<"*   *"<<endl<<"* * *"<<endl<<"*   *"<<endl<<"* * *"<<endl<<endl;
        /* code */
        break;
    case 9:
        cout<<"* * *"<<endl<<"*   *"<<endl<<"* * *"<<endl<<"    *"<<endl<<"* * *"<<endl<<endl;
        /* code */
        break;
    
    default:
        cout<<"invalid";
        break;
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of elements : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        digital(arr[i]);
    }
    return 0;
}