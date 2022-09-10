#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 


inline int sum(int x, int y) {
    return x + y;
}

int main()
{
    int x, y;
    cout << "Enter the number x : ";
    cin >> x;
    cout << "Enter the number y : ";
    cin >> y;

    cout << "The sum of x and y is : " << sum(x, y) << endl;


    
    return 0;
}