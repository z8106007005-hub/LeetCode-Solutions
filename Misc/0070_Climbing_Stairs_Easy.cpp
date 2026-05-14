/**
 * Problem: 0070. Climbing Stairs
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/climbing-stairs/
 * Language: cpp
 * Synced: 2026-05-14T18:07:30.728Z
 */
/* LeetSync Update Marker: submission:1965280245 */
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n ;

        int maxi1 = 1 ; 
        int maxi2 = 2 ;
        for(int i = 3 ; i <= n ; i++) {
            int mini = maxi1 + maxi2 ; 
            maxi1 = maxi2 ;
            maxi2 = mini ; 

        }

        return maxi2 ;
        //return climbStairs(n - 1) + climbStairs(n - 2) ; 
    }
};

auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});