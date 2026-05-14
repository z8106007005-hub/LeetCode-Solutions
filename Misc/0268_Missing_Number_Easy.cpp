/**
 * Problem: 0268. Missing Number
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/missing-number/
 * Language: cpp
 * Synced: 2026-05-14T18:09:58.576Z
 */
/* LeetSync Update Marker: submission:2000135478 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ; 
        int n = nums.size() ;
        int ans = -1 ; 
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] != i) {
                ans = i ; 
                break ;
            }
        }
        if(ans == -1) {
            return n ;
        }
        return ans ;
    }
};