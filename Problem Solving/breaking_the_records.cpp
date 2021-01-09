#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int no_of_games,max,min,record_broken_max=0,record_broken_min=0,i;
    cin >> no_of_games;
    int score[no_of_games];
    for (i=0;i<no_of_games;i++)
    {
        cin >> score[i];
    }
    max = min = score[0];
    for (i=0;i<no_of_games;i++)
        {
            if (score[i]> max )
            {
                record_broken_max++;
                max = score[i];
            }
            if (score[i] < min )
            {
                record_broken_min ++;
                min = score[i];
            }
        }
    cout << record_broken_max << " " << record_broken_min;
    
}
