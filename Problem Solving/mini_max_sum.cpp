#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int size =5,min,max=0,sum=0;
    for (int i=0;i<size;i++)
    {
        long long int j;
        cin >> j;
        if ( i == 0)
        min = j;
        if (j > max)
        max = j;
        if (j<min)
        min = j;
        sum = sum + j;
    } 
    
    cout << sum - max << " " << sum - min;
}
