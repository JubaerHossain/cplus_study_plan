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
#define M 1000000

bool marked[M];



bool prime_number(ll n)
{
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    ll n;
    cin>>n;

    if(prime_number(n)) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;

    
    
    return 0;
}