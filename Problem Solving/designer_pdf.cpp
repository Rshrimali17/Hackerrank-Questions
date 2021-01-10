#include <iostream>
#include <cstdio>
using namespace std;
int main()                          
{ 
    int arr[26],i,len,max=0,ans,j;
    for (i=0;i<26;i++)
    {
        cin >> arr[i];
    }
    string test;
    cin >> test;
    len = test.size();
    for (i=0;i<len;i++)
    {
        j = int(test[i]) - 97;
        if (max < arr[j])
        max = arr[j];
    }
    ans = max * len;
    cout << ans;
}
