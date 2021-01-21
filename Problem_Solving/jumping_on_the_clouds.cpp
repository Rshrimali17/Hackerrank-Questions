#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int cloud[size];
    for (int i=0;i<size;i++)
    {
        cin >> cloud[i];
    }
    int ans=0,pos=0;
    while (pos < size)
    {
        if (cloud[pos+2]== 0)
        {
            ans++;
            pos = pos+2;
        }
        else 
        {
            ans++;
            pos = pos+1;
        }
    }
    cout << ans-1;
}
