#include <iostream>
#include <cstdio>
using namespace std;
int reverse(int a);
int main()         
{
    int start_day,end_day,condition,good_days=0,temp;
    cin >> start_day >> end_day >> condition;
    while (start_day <= end_day)
    {
        temp = start_day;
        temp = reverse(start_day);
        if ((start_day - temp)%condition == 0)
        {good_days++;}
        start_day++;
        
    }
    cout << good_days;
}

int reverse (int a)
{
   int rev=0,remainder;
   while(a != 0) {
        remainder = a%10;
        rev = rev*10 + remainder;
        a /= 10;
    }
    return rev;
}
