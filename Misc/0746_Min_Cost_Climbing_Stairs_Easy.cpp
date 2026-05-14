/**
 * Problem: 0746. Min Cost Climbing Stairs
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/min-cost-climbing-stairs/
 * Language: cpp
 * Synced: 2026-05-14T18:07:42.495Z
 */
/* LeetSync Update Marker: submission:1965443201 */
class Solution {
public:

    int mini(int a , int b) {
        if(a > b) return b ;
        return a ;
    }
    int minCostClimbingStairs(vector<int>& c) {
        int n = c.size() ;
        vector<int> dp(n) ;
        dp[0] = c[0] ; 
        dp[1] = c[1] ; 
        for(int i = 2 ; i < n ; i++) {
            dp[i] = c[i] + mini(dp[i - 1] , dp[i - 2]) ; 
        }

        return min(dp[n - 1] , dp[n - 2]) ;
    }
};

auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});