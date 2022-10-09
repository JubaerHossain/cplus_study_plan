#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 


inline int recursion(int n) {
    if (n == 1 || n == 0 ) return 1;
    if(n < 0) return n;
    return n * recursion(n - 1);

}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << recursion(n) << endl;
    
    return 0;
}