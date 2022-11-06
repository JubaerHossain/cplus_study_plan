#include <bits/stdc++.h>
using namespace std;

int Armstrong(int a)
{
    int temp = a;
    int count = to_string(a).length();
    int sum = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        // cout << digit << endl;
        cout << pow(digit, count) << endl;
        cout << "old sum: " << sum << endl;
        int power = pow(digit, count);
        sum = sum + power;
        cout << "sum is " << sum << endl;
        temp /= 10;
    }
    cout << sum << endl;
    if (sum == a)
    {
        cout << a << " is an Armstrong number." << endl;
    }
    else
    {
        cout << a << " is not an Armstrong number." << endl;
    }
    return 0;
}

int main()
{
    int x = 153;
    Armstrong(x);

    return 0;
}