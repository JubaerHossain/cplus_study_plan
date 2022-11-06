#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 

int palindrome(int n){
    int temp = n;
    int rev = 0;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev;
}

int main()
{
    int n= 1215;

    if(palindrome(n) == n){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    
    
    return 0;
}