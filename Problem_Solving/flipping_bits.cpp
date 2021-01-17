#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int i=0;i<cases;i++)
    {
        long long unsigned int num;
         
        cin >> num;
        bitset<32>temp(num);
        bitset<32>temp2 = temp.flip();
        cout << temp2.to_ullong()<<endl;
}
}
