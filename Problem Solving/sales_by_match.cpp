#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int sock[size],n,counter=0,ans=0;
    for (int i=0;i<size;i++)
    {
        cin>>sock[i];
    }
    n = sizeof(sock)/sizeof(sock[0]);
    sort(sock,sock+n);
    int temp;
    temp = sock[0];
    for (int i=0;i<size;i++)
    {
        if (temp == sock[i])
        {
         counter++; 
        }
        
        if (temp != sock[i])
        {
        ans = ans + counter / 2;
        counter = 1;
        temp = sock[i];   
        }
        
    }
    ans = ans + counter / 2;
    cout << ans;
}
