#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) (a).begin(), (a).end()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * ((b) / gcd(a, b)))
#define point(a) fixed << setprecision(a)
#define uniq(a)   \
    sort(all(a)); \
    (a).erase(unique((a).begin(), (a).end()), (a).end())
#define tc       \
    int test;    \
    cin >> test; \
    while (test--)
using namespace std;
class Solution {
public:
    int reverse(int n) {
    int rev=0;
        while(n!=0){
            int pop=n%10;
            n/=10;
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && pop>7)) return 0;
            if(rev<INT_MIN/10 || (rev==INT_MIN/10 && pop<-8)) return 0;
            rev=rev*10+pop;
        }
        return rev;
        
    }
};

int main()
{
    int n = 17683;

    Solution s;
    cout << s.reverse(n) << endl;


    return 0;
}