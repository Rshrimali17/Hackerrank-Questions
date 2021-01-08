#include <bits/stdc++.h>

using namespace std;

int main()
{
   int  budget,no_of_keyboards,no_of_usb;
   cin >> budget >> no_of_keyboards >> no_of_usb;
   int keyboard[no_of_keyboards],usb[no_of_usb];
   for (int i=0;i<no_of_keyboards;i++)
   {
       cin >> keyboard[i];
   }
   for (int i = 0 ; i < no_of_usb; i++)
   {
       cin >> usb[i];
   }
   int max = 0;
   for (int i =0;i<no_of_keyboards;i++)
   {
       for (int j=0;j<no_of_usb;j++)
       {
           int temp = keyboard[i] + usb[j];
           if (max < temp && temp <= budget)
           max = temp;
       }
   }   
    if (max != 0)
    cout << max;
    else cout << "-1";
}