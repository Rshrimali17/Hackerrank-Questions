#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int size,candels,total=0;
    cin >> size;
    for (int i=0;i<size;i++)
    {
        int temp;
        cin >> temp;
        if(i==0)
        candels = temp;
        if (temp==candels)
        total++;
        if (temp > candels)
        { candels = temp;
        total =1;
        }
    }
    cout << total;    
        
}
