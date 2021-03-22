#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



int main() {
    string a,b,c;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    c = a + b;
    cout << c << endl;
    c[0] = a[0];
    a[0] = b[0];
    b[0] = c[0];
    cout << a << " " << b;
    
     
    
    return 0;
}
