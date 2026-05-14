/**
 * Problem: 3904. Smallest Stable Index II
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/smallest-stable-index-ii/
 * Language: cpp
 * Synced: 2026-05-14T18:09:02.593Z
 */
/* LeetSync Update Marker: submission:1982209954 */
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size() ;
        vector<int> prefixx(n) ;
        vector<int>suffixx(n) ;

        prefixx[0] = nums[0] ;
        suffixx[n - 1] = nums[n - 1] ;
        
        for(int i = 1 ; i < n ; i++) {
            prefixx[i] = max(prefixx[i - 1] , nums[i]) ;
        }
        for(int i = n - 2 ; i >= 0 ; i--) {
            suffixx[i] = min(suffixx[i + 1] , nums[i]) ;
        }
        for(int i = 0 ; i < n ; i++) {
            if(k >= (prefixx[i] - suffixx[i])) {
                return i ;
            }
        }
        return -1 ;
    }
};