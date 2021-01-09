#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    for (int i=0;i<size;i++)
    {
        int grade,j=0,counter = 5;
        cin >> grade;
        while( j== 0 )
        {
            if(grade > counter)
            counter = counter +5;
            else j=1;
        }
        if (counter - grade  >=3)
        grade = grade;
        if (counter - grade <3)
        {
            if (counter >= 40)
            grade = counter;
            if (counter < 40)
            grade = grade;
            
        }
        cout << grade << endl;
      }
}
