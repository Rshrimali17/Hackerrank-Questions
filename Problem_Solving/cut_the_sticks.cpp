#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size,min=100;
    cin >> size;
    int stick[size];
    for (int i=0;i<size;i++)
    {
        cin >> stick[i];
        
    }
    int check=0,ans=0,count=0;
    while(check==0)
    {
        count=0,ans=0,min=999;
        for(int i=0;i<size;i++)
        {
         if (min > stick[i] && stick[i]!=0)
        min = stick[i];   
       // cout << "min= " << min << endl;
        }
        
        for(int i=0;i<size;i++)
        {
            if (stick[i] - min >= 0 )
            {
                ans++;
                stick[i] = stick[i]-min;    
            }
    
            if (stick[i]==0)
            count++;
            if (count == size)
            check =1;
        }
        cout << ans << endl;
    }

}