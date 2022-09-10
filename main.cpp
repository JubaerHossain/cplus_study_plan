#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 

//here is int &a and int &b holds the address of a and b respectively and not the value of a and b in the swap function and 
//hence the value of a and b in the main function is also changed
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter the number x : ";
    cin >> x;
    cout << "Enter the number y : ";
    cin >> y;
    cout << "Before swapping : " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    swap(x, y);
    cout << "After swapping : " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}