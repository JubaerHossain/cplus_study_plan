#include<bits/stdc++.h>
#define ll long long
using namespace std; 


inline int recursion(int n) {
    if (n == 1 || n == 0 ) return 1;
    if(n < 0) return n;
    return n * recursion(n - 1);

}

inline ll fx(ll n){
    if(n <= 0 ) return 1;

    return n + fx(n-1);

}

int main()
{
    int n,f;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << recursion(n) << endl;

    // for f(5) = f6(x-1) + x

    cout << "Enter f6(x) number is : ";

    cin >> f;

    cout << "F6(" << f << ") is :" << fx(f) <<endl;





    
    return 0;
}