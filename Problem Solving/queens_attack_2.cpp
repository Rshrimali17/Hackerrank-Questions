#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size,x,y,ans=0;
    cin >> size;
    int chess[size][size];
    int cases;
    cin >> cases >> x >> y;
    for(int i=0;i<cases;i++)
    {
        int temp, temp1;
        cin >> temp>> temp1;
        chess[size-1-temp][temp1-1]=1;
    }
    for (int i=0;i<size;i++)
    {
        int temp_x =size -x;
        if (chess[temp_x][i] != 1 && i != y)
        ans++;
        
    }

    for (int i=0;i<size;i++)
    {
        int temp_y =size -1;
        if (chess[i][temp_y] != 1 && i != x)
        ans++;
        
        
    }
    
    for (int i=0;i<size;i++)
    {
        int temp_x=size-x,temp_y= size -1;
        
    }
}
  
