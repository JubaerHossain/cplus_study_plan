#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) (a).begin(),(a).end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define point(a) fixed<<setprecision(a)
#define uniq(a) sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define tc int test; cin>>test; while(test--)
using namespace std; 

struct mystruct
{
    string name;
    int age;
};


int main()
{
    struct mystruct m1;
    m1.name = "john";
    m1.age = 25;
    cout << "result is " << m1.age << endl;

    struct mystruct * m2;
    m2 = &m1;

    (*m2).age = 30;
    
    cout << "result is " << m1.age << endl;






    
    return 0;
}