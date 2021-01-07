#include <iostream>
using namespace std;





int main()
{
    int cities{0};
    int n{0};
    cin >> cities>>n;
    int available_array[n];
    for (int i=0; i<n;i++){
       cin >> available_array[i];
    }
    // i took input


    long long int my_max=0;
    for ( long long int i=0; i< cities;i++){
        long long int a=9999999999999;
        for ( long long int j: available_array){
            a= min(abs(j-i),a);
        }

        if (my_max<a){
            my_max= a;
        }
        //cout<<a<<" ";

    }

    cout<<my_max;



}