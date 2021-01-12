#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
        
    }
    sort(arr,arr+size);
    int temp=arr[0],counter=0,max=0;
    for(int i=0;i<size;i++)
    {
     if (temp == arr[i])
     {counter++;
    // cout << counter <<" ";
        if (counter > max)
        {
            max = counter;
        }
     }
     else 
     {
         temp = arr[i];
         counter =1;
    // cout << counter <<" ";
     }  
     
        
    }

    cout << size-max;
    
}
