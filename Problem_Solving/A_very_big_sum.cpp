#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int size,i;
    long long int sum=0;
    cin >> size;
    long long int arr[size];
    for (i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}
