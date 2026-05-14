/**
 * Problem: 1855. Maximum Distance Between a Pair of Values
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/
 * Language: cpp
 * Synced: 2026-05-14T18:09:26.059Z
 */
/* LeetSync Update Marker: submission:1982288421 */
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() ;
        int m = nums2.size() ;

        int i = 0 , j = 0 ; 
        int maxi = 0 ;
        while(i < n && j < m) {
            if(nums1[i] <= nums2[j]) {
                maxi = max(maxi , j - i) ; 
                j++ ;
            }
            else {
                i++ ;
            }
        }
        return maxi ;
    }
};