/**
 * Problem: 0169. Majority Element
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/majority-element/
 * Language: cpp
 * Synced: 2026-05-14T18:00:29.370Z
 */
/* LeetSync Update Marker: submission:1859120499 */
#define ll int
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<ll , ll> mp ;
        ll n = nums.size() ;
        for(ll i = 0 ; i < n ; i++) {
            mp[nums[i]]++ ;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.rbegin() , v.rend() , [](auto &a, auto &b) {
            return a.second < b.second;  
        });
        return v[0].first ;
        
    }
};