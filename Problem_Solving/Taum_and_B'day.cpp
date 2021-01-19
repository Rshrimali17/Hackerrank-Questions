#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int cases;
    cin >> cases;
    for (int i=0; i<cases; i++) 
    {
        long long int b_no,w_no,ans=0;
        cin >> b_no >> w_no;
       long long  int b_cost,w_cost,convert;
        cin >> b_cost >> w_cost >> convert;
        if(b_cost <= w_cost && b_cost <= w_cost+convert)
        {
            ans += b_cost * b_no;
            //cout << "black gifts costs : " << ans << " ";
            
        }
        else if (b_cost <= w_cost && b_cost >= w_cost+convert)
        {
            ans += b_cost * b_no;
            //cout << "black gifts costs : " << ans << " ";
            
        }
        else if (b_cost >= w_cost && b_cost <= w_cost+convert)
        {
            ans += b_cost * b_no;
           // cout << "black gifts costs : " << ans << " ";
            
        }
        else {ans += (w_cost + convert)*b_no;
           // cout << "black gifts costs : " << ans << " ";
        }    
        
        if (w_cost <= b_cost && w_cost <= b_cost + convert)
        {
            ans += w_cost * w_no; 
            //cout << "white gifts costs : " << ans << " ";
              
        }
        else if (w_cost <= b_cost && w_cost >= b_cost + convert)
        {
            ans += w_cost * w_no;   
            //cout << "white gifts costs : " << ans << " ";
            
        }
        else if (w_cost >= b_cost && w_cost <= b_cost + convert)
        {
            ans += w_cost * w_no;   
           // cout << "white gifts costs : " << ans << " ";
            
        }
        else ans+=(b_cost + convert) * w_no;
        cout << ans << endl;
    }
}
