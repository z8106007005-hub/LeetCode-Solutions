/**
 * Problem: 3818. Minimum Prefix Removal to Make Array Strictly Increasing
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/minimum-prefix-removal-to-make-array-strictly-increasing/
 * Language: cpp
 * Synced: 2026-05-14T18:25:11.637Z
 */
/* LeetSync Update Marker: submission:1895929891 */
class Solution {
public:
    int minimumPrefixLength(vector<int>& a) {
        int l1 = 0 ; 
        int n = a.size() ;
        for(int i = n - 1 ; i >= 1 ; i--) {
            if(a[i - 1] >= a[i]) {
                return i ; 
            }
        }
        return 0 ; 
    }
};