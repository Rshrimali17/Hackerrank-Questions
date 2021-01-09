#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s1,v1,s2,v2;
    cin >> s1>>v1>>s2>>v2;
    if(s1 <= s2 && v1 <= v2)
    cout << "NO";
    else 
    {
        while (s1 <=s2)
        {
            if(s1 == s2)
            {
                cout <<"YES";
                return 0;
            }
            s1 = s1+v1;
            s2 = s2+v2;
        }
        cout  <<"NO";
    }
}
