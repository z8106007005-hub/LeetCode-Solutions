/**
 * Problem: 0136. Single Number
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/single-number/
 * Language: cpp
 * Synced: 2026-05-14T18:00:53.983Z
 */
/* LeetSync Update Marker: submission:1861246441 */
#define ll int 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<ll , ll> mp ;
        for(auto x : nums) {
            mp[x]++ ;
        }
        vector<pair<ll, ll>> freq(mp.begin(), mp.end());

        sort(freq.begin(), freq.end(),
            [](const pair<ll,ll>& a, const pair<ll,ll>& b) {
            return a.second < b.second;
        });

        return freq[0].first ;
    }
};