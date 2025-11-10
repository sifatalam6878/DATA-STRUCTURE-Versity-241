#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];
    for (int i = 0; i < n;i++)
    {
        if(arr[i]>maximum)
         {
             maximum = arr[i];
         }
         else if(arr[i] < minimum)
         {
             minimum = arr[i];
         }
    }
    cout << "Maximum : " << maximum << endl;
    cout << "Minimum : " << minimum << endl;
    return 0;
}
