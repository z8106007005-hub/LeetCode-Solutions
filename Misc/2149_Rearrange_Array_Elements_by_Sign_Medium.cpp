/**
 * Problem: 2149. Rearrange Array Elements by Sign
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/rearrange-array-elements-by-sign/
 * Language: cpp
 * Synced: 2026-05-14T18:29:18.880Z
 */
/* LeetSync Update Marker: submission:2001435558 */
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size() ; 
        int pos = 0 ; 
        int neg = 1 ; 
        vector<int> ans(n) ;

        for(auto x : nums) {
            if(x >= 0) {
                ans[pos] = x ; 
                pos += 2 ; 
            }
            else {
                ans[neg] = x ; 
                neg += 2 ;
            }
        }
        return ans ;
    }
};