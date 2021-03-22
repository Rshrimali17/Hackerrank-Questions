#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,i;
    cin >> x ;
    int a[x];
    for (i=0;i<x;i++)
    {
        cin >> a[i];
    }
    for (i=x-1; i>=0;i--)
    {
        cout << a[i]<<" ";
    }
    return 0;
}
