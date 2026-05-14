/**
 * Problem: 0347. Top K Frequent Elements
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/top-k-frequent-elements/
 * Language: cpp
 * Synced: 2026-05-14T18:08:19.833Z
 */
/* LeetSync Update Marker: submission:1972892216 */
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp ;
        for(auto x : nums) {
            mp[x]++ ;
        }
        vector<pair<int , int>> ans ;

        for(auto x : mp) {
            ans.push_back({x.second , x.first}) ;
        }

        sort(ans.rbegin() , ans.rend()) ;
        vector<int>a(k) ; 
        for(int i = 0 ; i < k ; i++) {
            a[i] = ans[i].second ;
        }
        return a ;
    }
};