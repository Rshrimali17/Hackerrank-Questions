#include <iostream>
#include <cstdio>
using namespace std;
int main()                          
{
 int i,a[3],b[3],a_points=0,b_points=0;
 for(i=0;i<3;i++)
 {
     cin >> a[i];
 }
 for(i=0;i<3;i++)
 {
     cin >> b[i];
 }
 for(i=0;i<3;i++)
 {
     if(a[i]>b[i])
     a_points++;
     if (b[i]>a[i])
     b_points++;
     
 }    
 cout << a_points<<" "<< b_points; 
}
