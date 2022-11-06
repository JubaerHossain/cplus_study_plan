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

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i = 0; i < nums1.size(); i++){
            int j = 0;
            while(nums2[j] != nums1[i]) j++;
            while(j < nums2.size() && nums2[j] <= nums1[i]) j++;
            if(j == nums2.size()) v.push_back(-1);
            else v.push_back(nums2[j]);
        }
        return v;
        
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> ans = s.nextGreaterElement(nums1,nums2);


    

    
    return 0;
}