#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size_i,size_j,ans=0;
    cin >> size_i >> size_j;
    int cube[size_i][size_j];
    for (int i=0;i<size_i;i++)
    {
        for(int j=0;j<size_j;j++)
        {
            cin >> cube[i][j];
        }
    }
    
    for (int i=0;i<size_i;i++)
    { int base = size_j;
       int temp = cube[i][0];
       if(size_j==1)
       ans++;
      //cout << "i=" << i <<endl;
        for(int j=0;j<size_j-1;j++)
        {
            if (j==0)
            ans++;
            ans += abs(cube[i][j] -cube[i][j+1]);
           // cout << ans <<endl;
            ans += 1;
            //cout << ans <<endl;
        }
        
        ans += cube[i][size_j - 1] - 0;
      // cout << ans <<endl;
        ans += base;
     //  cout << ans <<endl;
        ans += temp;
       // cout << ans <<endl;
    }
     for (int i=0;i<size_j;i++)
    {int temp = cube[0][i];
  // cout << "j=" << i <<endl;
        for(int j=0;j<size_i-1;j++)
        {
            ans += abs(cube[j][i] -cube[j+1][i]);
           // cout << ans <<endl;
        }
        ans += cube[size_i - 1][i] - 0;
      // cout << ans <<endl;
        ans += temp;
        //cout << ans <<endl;
    }
   cout << ans <<endl;
}
