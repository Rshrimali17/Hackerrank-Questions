#include <bits/stdc++.h> 
using namespace std;

int main(){

    int num1, num2, first, second, ans, noOfCases;
    float check;

    cin >> noOfCases;

    while(noOfCases != 0){
        cin >> num1 >> num2;

        check = sqrt(num1);
        first = check;
        second = sqrt(num2);

        ans = second - first;

        if(first == check){
            ans ++;
        }

        cout << ans << endl;
        noOfCases --;
    }

}
