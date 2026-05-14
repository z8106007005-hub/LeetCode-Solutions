/**
 * Problem: 2784. Check if Array is Good
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/check-if-array-is-good/
 * Language: cpp
 * Synced: 2026-05-14T18:30:16.775Z
 */
/* LeetSync Update Marker: submission:2002659799 */
class Solution {
public:
    bool isGood(vector<int>& nums) {
        //int x = max_element(nums.begin() , nums.end()) ;
        int n = nums.size() ;
        if(n <= 1) return false ;
        sort(nums.begin() , nums.end()) ;
        for(int i = 0 ; i < n - 1 ; i++) {
            if(nums[i] == nums[i + 1] && i != n - 2) return false ;
        }
        return (nums[n - 1] == nums[n - 2] && n - 1 == nums[n - 1]) ;
    }
};