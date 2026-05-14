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
};/*
 * ------------------------------------------------------------
 * LeetSync appended newer accepted solution
 * LeetSync Update Marker: submission:2001427999
 * Appended At: 2026-05-14T18:29:03.723Z
 * ------------------------------------------------------------
 *//**
 * Problem: 0169. Majority Element
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/majority-element/
 * Language: cpp
 * Synced: 2026-05-14T18:29:01.895Z
 */
/* LeetSync Update Marker: submission:2001427999 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int count = 0 ; 
        int flags = nums[0] ; 
        for(int i = 1 ; i < nums.size() ; i++) {
            if(nums[i] == nums[i - 1]) count++ , flags = nums[i] ; 
            else count = 0 ; 
            if(count >= nums.size() / 2) break ;
        }
        return flags ;
    }
};