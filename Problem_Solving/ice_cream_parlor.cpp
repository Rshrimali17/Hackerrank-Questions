#include <bits/stdc++.h>

using namespace std;
int main()
{
    int cases;
    cin >> cases;
    for (int i=0;i<cases;i++)
    {
        int budget,size,max=0,x=0,y=0;
        cin >> budget>>size;
        int flavor[size];
        for (int i=0; i<size;i++)
        {
            cin >> flavor[i];
        } 
        for(int i=0;i<size;i++)
        {
            for (int j=0;j<size;j++)
            {
                int temp = flavor[i] + flavor[j];
                if (temp > max && temp <= budget && i !=j)
                {
                    max = temp;
                    x = i;
                    y=j;
                }
            }
        }
    if (x >=y )
    cout << y+1 << " " << x+1<<endl;
    else cout << x+1 << " " << y+1<<endl;      
    }
    
}