#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int size,target,ans=0;
    cin >> size>>target;
    long long int arr[size];
    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+size);
    for (int i=0;i<size-1;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (abs(arr[i]-arr[j]) == target)
            ans++;
            if(abs(arr[i]-arr[j]) > target)
            break;
        }
    }
    cout << ans;
}
