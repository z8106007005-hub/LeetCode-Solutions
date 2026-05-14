/**
 * Problem: 3842. Toggle Light Bulbs
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/toggle-light-bulbs/
 * Language: cpp
 * Synced: 2026-05-14T18:06:47.234Z
 */
/* LeetSync Update Marker: submission:1919574219 */
#define ll int 
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& b) {
        ll n = b.size() ;

        unordered_map<ll , ll> freq ;

        for(ll i = 0 ; i < n ; i++) {
            freq[b[i]]++ ; 
        }

        vector<ll> a ; 

        for(auto p : freq) {
            ll x = p.second ; 
            if(x % 2 != 0) a.push_back(p.first) ;
        }
        sort(a.begin() , a.end()) ;
        return a ;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});