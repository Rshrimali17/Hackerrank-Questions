#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no_of_dishes,not_eaten,sum=0;
    cin >> no_of_dishes >> not_eaten;
    for (int i=0; i<no_of_dishes;i++)
    {
        int dish_cost;
        cin >> dish_cost;
        if (i  != not_eaten)
        sum = sum + dish_cost;
        
    }
    int amount;
    cin >> amount;
    sum = sum/2;
    if (amount == sum)
    {
        cout << "Bon Appetit";
        return 0;
    }

    if (sum > amount)
    cout << sum - amount;
    else cout<< amount - sum;
    
    
}
