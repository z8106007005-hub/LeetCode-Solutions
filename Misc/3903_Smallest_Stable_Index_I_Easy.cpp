/**
 * Problem: 3903. Smallest Stable Index I
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/smallest-stable-index-i/
 * Language: cpp
 * Synced: 2026-05-14T18:08:54.924Z
 */
/* LeetSync Update Marker: submission:1982193437 */
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        //int x , y ; 
        int n = nums.size() ;
        int mini = INT_MAX ; 
        //int maxi = 0 ; 
        // for(int i = 0 ; i < n ; i++) {
            
        // }
        vector<int> prefixx(n) ;
        prefixx[0] = nums[0] ;
        for(int i = 1 ; i < n ; i++) {
            prefixx[i] = max(prefixx[i - 1] , nums[i]) ;
        }
        vector<int> suffix(n) ;
        suffix[n - 1] = nums[n - 1] ;
        for(int i = n - 2 ; i >= 0 ; i--) {
            suffix[i] = min(suffix[i + 1] , nums[i]) ;
        }

        for(int i = 0 ; i < n ; i++) {
            if(k >= (prefixx[i] - suffix[i])) {
                // maxi = i ;
                return i ;
            }
            
        }
        return -1 ;
    }
};