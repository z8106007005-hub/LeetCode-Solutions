/**
 * Problem: 0001. Two Sum
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/two-sum/
 * Language: cpp
 * Synced: 2026-05-14T18:08:15.794Z
 */
/* LeetSync Update Marker: submission:1970665052 */
class Solution {
public:
    vector<int> twoSum(vector<int>& a , int target) {
        map<int , int> mp ; 
        for(int i = 0 ; i < a.size() ; i++) {
            int maxi = target - a[i] ; 

            if(mp.find(maxi) != mp.end()) {
                return {mp[maxi] , i} ;
            }

            mp[a[i]] = i ;
        }
        return {} ;
    }
};