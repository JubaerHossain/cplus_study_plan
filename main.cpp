#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main()
{
    int x = 6, y = 3;
    cout << GCD(x, y) << endl;   
    
    return 0;
}