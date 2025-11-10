#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,idx,value;
    cin >> n;
    int arr[n+1];
    for(int i=0 ;i<n; i++)
    {
        cin >> arr[i];
    }

    cin >> idx >> value;

    for(int i=n; i>=idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = value;
    
    for(int i=0; i<=n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
