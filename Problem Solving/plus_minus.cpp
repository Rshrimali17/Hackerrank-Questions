#include <bits/stdc++.h>

using namespace std;

int main()
{
    float size;
    float pos=0,neg=0,zero=0;
    cin >> size;
    for(int i=0;i<size;i++)
    {
        int num;
        cin >> num;
        if (num > 0)
        pos++;
        if (num < 0)
        neg++;
        if (num ==0)
        zero++;       
    }
    pos = pos/size;
    neg = neg/size;
    zero = zero/size;
    cout << pos << endl << neg << endl << zero;
}
