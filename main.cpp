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

int count1(int n){
    int count = 0;
    while(n > 0){
        n = n / 10;
        count++;
    }
    return count;

}
int count2(int n){
   return  to_string(n).length();
}

int count3(int n){

   return floor(log10(n) + 1);
}

int main()
{
    int n = 13;

    cout<<count1(n)<<endl;
    cout<<count2(n)<<endl;
    cout<<count3(n)<<endl;

    return 0;
}   