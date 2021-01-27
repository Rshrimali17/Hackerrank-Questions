#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int i=0;i<cases;i++)
    {
        int num,j=10,temp,ans=0,temp1;
        cin >> num;
        temp=num;
        while (num > 0)
        {
            temp1=num%j;
            if (temp1!=0)
            {
            if (temp%temp1==0)
            ans++;
            }
            num = num/10;
        }
        cout << ans << endl;
    }
    return 0;
}
