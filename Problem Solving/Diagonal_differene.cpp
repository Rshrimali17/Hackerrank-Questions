#include <iostream>
#include <cstdio>

using namespace std;

int main()         
{
    int size,a_sum=0,b_sum=0;
    cin >> size;
    int arr[size][size];
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            cin >> arr[i][j];
        }
    } 
   
    for(int i=0;i<size;i++)
    {
        a_sum = a_sum + arr[i][i];
        b_sum = b_sum + arr[i][size-i-1];
    }
   
    if (a_sum > b_sum)
    {
        cout << a_sum - b_sum;
    }
    else cout << b_sum - a_sum;
    
}