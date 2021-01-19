#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size,cases;
    cin >> size>>cases;
    int width[size];
    for (int i=0;i<size;i++)
    {
        cin >> width[i];
    }
    
    for (int i =0;i<cases;i++)
    {
        int start,end,min=0;
        cin >> start >>end;
        min=width[start];
        for(int j=start;j<=end;j++)
        {
            if(min > width[j])
            min = width[j];
        }
        cout << min<<endl;
    }
}
