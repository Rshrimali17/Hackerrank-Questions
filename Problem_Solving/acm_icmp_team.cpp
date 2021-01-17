#include <bits/stdc++.h>

using namespace std;

int main()
{
    int students,subjects,max=0,counter=0,ans=0;
    cin >> students>> subjects;
    char arr[students][subjects];
    for (int i=0;i<students;i++)
    {
        for (int j=0;j<subjects;j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i =0;i<students-1;i++)
    {
        for(int j=i+1;j<students;j++)
        {
            for (int k=0;k<subjects;k++)
            {
                if(arr[i][k] == '1' || arr[j][k] == '1')
                counter ++;
                //cout << i << " " << j << " "<< counter<<endl;
            }
           /* if(counter>=max)
            {
                max= counter;
                ans++;
                counter =0;
               cout << "ans =" << ans << " "<<"max =" << max <<endl;
            }
            */
            if (counter>max)
            {
                max = counter;
                ans =1;
                counter =0;
                // cout << "ans =" << ans << " "<<"max =" << max <<endl;
            }
            if (counter==max)
            {ans++;
            counter=0;
             //cout << "ans =" << ans << " "<<"max =" << max <<endl;
            }
            else 
            {counter=0;
            }
        }
    }
    cout << max << endl <<ans;
}