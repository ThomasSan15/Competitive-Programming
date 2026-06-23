//https://leetcode.com/problems/two-sum/submissions/2042778490/

#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <complex>
// #include <map>
// #include <set>
// #include <string>
// #include <vector>
// #include <numeric>
// #include <array>
// #include <cassert>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i = a, jet = b; i < jet; i++)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define imp(v) {for(auto i : v) cout << i << " "; cout << "\n";}
#define inp(v) {for(auto &i : v) cin >> i;}


typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<string> vvs;
typedef vector<set<ll>> vst;


// const ll INF = 1e18;
// const int MOD = 1e9 + 7;


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif




    class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for( int l = 0; l < nums.size(); l++){
            for(int r = 0; r < nums.size(); r++){
                if(l != r){
                    if(nums[l] + nums[r] == target){
                        return {l,r};
                    }
                }
            }
        }
        return {0,0};
    }
};

// BEST SOLUTION: HASH THE COMPLEMENT: One-pass Hash Table

/*It turns out we can do it in one-pass. While we are iterating and 
inserting elements into the hash table, we also look back to 
check if current element's complement already exists in the hash table. 
If it exists, we have found a solution and return the indices immediately.*/

/*class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end()) {
                return {hash[complement], i};
            }
            hash[nums[i]] = i;
        }
        // Return an empty vector if no solution is found
        return {};
    }
};*/


int main() {
    fastio
    
    int t = 1;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}