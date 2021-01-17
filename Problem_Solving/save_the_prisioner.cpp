#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int i=0;i<cases;i++)
    {
        long long int prisioners,candy,start,r;
        cin >> prisioners >> candy >> start;
        candy = candy % prisioners;
        if ((candy + start -1)%prisioners ==0)
        cout << prisioners << endl;
        else cout << (candy + start -1)%prisioners<<endl;
    }
}
