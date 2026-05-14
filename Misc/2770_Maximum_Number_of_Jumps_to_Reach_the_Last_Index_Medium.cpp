/**
 * Problem: 2770. Maximum Number of Jumps to Reach the Last Index
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
 * Language: cpp
 * Synced: 2026-05-14T18:09:37.735Z
 */
/* LeetSync Update Marker: submission:1999786823 */
class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size() ; 

        vector<int> dp(n , -1) ;
        dp[0] = 0 ; 
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < i ; j++) {
                if(abs(nums[i] - nums[j]) <= target && dp[j] != -1) {
                    dp[i] = max(dp[i] , dp[j] + 1) ;
                }
            }
        }

        // if(dp[n - 1] == 0) return -1 ;
        // return dp[n - 1] / 2 ;

        return dp[n - 1] ;
    }
};