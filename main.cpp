#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // palindrome series of n numbers in reverse order
    for (int i = n; i >= 1; i--)
    {
        int num = i;
        int rev = 0;
        while (num > 0)
        {
            int rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        if (i == rev)
        {
            cout << i << " ";
        }
    }
    
    
    return 0;
}