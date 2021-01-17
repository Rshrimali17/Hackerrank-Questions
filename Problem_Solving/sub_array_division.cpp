#include <iostream>
#include <cstdio>

using namespace std;

int main()         
{
    int bar_size,temp,total=0,k=0;
    cin >> bar_size;
    int chocolate[bar_size];
    for(int i=0; i< bar_size; i++)
    {
        cin >> chocolate[i];
    }
    int bday,size;
    cin >> bday >> size;
    for (int i =0; i < bar_size ; i++)
    {
        temp = i;
        total =0;
        for (int j=0;j<size;j++)
        {
          
          total = total + chocolate[i]; 
          i++;
          
        }
        i=temp;
        if (total==bday)
        {
            k++;
        }
    }
    
    cout << k;
}
