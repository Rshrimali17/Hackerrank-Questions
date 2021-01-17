#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int size_of_array,ans=0,i,j,test=0,max=0,min=0;
    cin >> size_of_array;
    int arr[size_of_array];
    for (i=0; i < size_of_array ; i++)
    {
        cin >> arr[i];
    }
    for (j=0; j < size_of_array ; j++)
    {
        test = arr[j];
        for (i=0; i < size_of_array ; i++)
        {
            if (arr[i] == test-1 || arr[i] == test)
                min++;
            if (arr[i]== test+1 || arr[i] == test)
                max++;    
        }
        if (ans < max || ans < min)
        {
        if (max>min)
        ans=max;
        else ans = min;
        }
        max =0;
        min=0;
                
    }
    cout << ans; 

}
