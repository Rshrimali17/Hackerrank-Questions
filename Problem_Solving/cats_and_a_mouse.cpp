#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for(int i=0;i<cases;i++)
    {
        int cat_a,cat_b,mouse;
        cin >> cat_a>>cat_b>>mouse;
        if(abs(cat_a-mouse) > abs(cat_b-mouse))
        cout << "Cat B";
        else if(abs(cat_a-mouse) < abs(cat_b-mouse))
        cout << "Cat A";
        else cout << "Mouse C";
        cout << endl;
    }
}