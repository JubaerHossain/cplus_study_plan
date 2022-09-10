#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 


inline int recursion(int n) {
    if (n == 1) return 1;
    return n * recursion(n - 1);

}

int fibonacci(int n) {
    if (n < 2) return 1;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // cout << "Factorial of " << n << " is " << recursion(n) << endl;
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    
    return 0;
}