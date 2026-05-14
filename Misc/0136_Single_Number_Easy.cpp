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
};/*
 * ------------------------------------------------------------
 * LeetSync appended newer accepted solution
 * LeetSync Update Marker: submission:2000490732
 * Appended At: 2026-05-14T18:10:06.711Z
 * ------------------------------------------------------------
 *//**
 * Problem: 0136. Single Number
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/single-number/
 * Language: cpp
 * Synced: 2026-05-14T18:10:06.244Z
 */
/* LeetSync Update Marker: submission:2000490732 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ; 
        for(int i = 1 ; i < nums.size() ; i += 2) {
            if(nums[i] != nums[i - 1]) return nums[i - 1] ; 
        }
        return nums[nums.size() - 1] ;
    }
};