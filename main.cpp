#include<bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std; 

int main()
{



    ll a = 12;
    ll b = 25;

    // and operator
    cout << "And is : " << (a & b) << endl;

    // or operator

    cout << "Or is : " << (a | b) << endl;



    // xor of all numbers from 1 to n
    ll ans = a^b;
    cout<<"xor ans = "<<ans<<endl;

    // 2's complement

    cout << "2's complement of - 150 is : " << (~(-150)) << endl;



    // left shift
    ll c = 4;
    ll d = c << 2;
    cout<<"left shift = "<<d<<endl;

    // right shift

    ll e = 16;
    ll f = e >> 2;
    cout<<"right shift = "<<f<<endl;

    return 0;
}