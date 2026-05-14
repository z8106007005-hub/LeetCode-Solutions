/**
 * Problem: 3840. House Robber V
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/house-robber-v/
 * Language: cpp
 * Synced: 2026-05-14T18:27:53.773Z
 */
/* LeetSync Update Marker: submission:1919164329 */
#define ll int
class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        ll n = nums.size() ;
        if(n == 0) return 0 ; 
        if(n == 1) return nums[0] ;

        

        vector<long long> dp(n + 1, 0) ; 

        dp[0] = nums[0] ;

        if(colors[0] == colors[1]) {
            dp[1] = max(nums[0] , nums[1]) ; 
        }
        else dp[1] = nums[1] + nums[0] ;

        for(ll i = 2 ; i < n ; i++) {
            if(colors[i] == colors[i - 1]) {
                dp[i] = max(dp[i - 1] , dp[i - 2] + nums[i]) ; 
            }
            else dp[i] = nums[i ] + dp[i - 1] ;
        }
        return dp[n - 1] ;
    }
};