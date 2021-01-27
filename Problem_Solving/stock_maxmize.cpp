#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int i=0;i<cases;i++)
    {
        int size;
        cin >> size;
        long long int price[size];
        for (int j=0;j<size;j++)
        {
            cin >> price[j];
        }
        long long int stock=0,cost=0,sell=0,check=0,max=0;
        
        for (int j=0;j<size-1;j++)
      {
             max=0;   
                         
            if(price[j+1] > price[j])
                {
                    stock++;
                    cost = cost + price[j];
                  // cout << "stock= " << stock << "cost= " << cost <<endl;
                   
                }
            else 
                {
                    for(int k=j+1;k<size;k++)
                    {
                    if (max < price[k])
                    max = price[k];
                    if ( max > price[j])
                    {
                          check=1;
                    } 
                    }             
                    if(check !=1)
                    {sell = sell + price[j]*stock;
                    stock = 0;
                    //cout << "stock= " << stock << "sell= " << sell <<endl;
                    check=0;
                    }
                    else
                    {
                    stock++;
                    cost = cost + price[j]; 
                    check=0;
                    }
                }
            
        }
        if (stock!=0)
        sell = sell + price[size-1]*stock; 
        cout << sell-cost<<endl;    
    }
}
