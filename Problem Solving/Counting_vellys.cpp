#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    char path[size];
    for (int i=0;i<size;i++)
    {
        cin >> path[i];
    }
    int level=0,temp=0,valley=0;
    for (int i=0;i<size;i++)
    {
        if (path[i] == 'U')
        level++;
        if (path[i]=='D')
        level--;
        if (level < 0 &&temp == 0)
        {
            valley++;
            temp = 1;
        }
        if (level ==0)
        {
            temp =0;
        }
    }
    cout <<valley;
}
