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

void call_by_value(int a, int b) {
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;
}

void call_by_reference(int &a, int &b) {
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;
}

int main()
{
    int x, y;
    cout << "Enter the number x : ";
    cin >> x;
    cout << "Enter the number y : ";
    cin >> y;


    cout << "Call by value : " << endl;
    call_by_value(x, y);
    cout << "x = " << x << " y = " << y << endl;
    cout << "Call by reference : " << endl;
    call_by_reference(x, y);
    cout << "x = " << x << " y = " << y << endl;


    
    return 0;
}