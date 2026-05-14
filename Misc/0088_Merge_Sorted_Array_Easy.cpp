/**
 * Problem: 0088. Merge Sorted Array
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/merge-sorted-array/
 * Language: cpp
 * Synced: 2026-05-14T18:00:35.335Z
 */
/* LeetSync Update Marker: submission:1859672705 */

#define ll int 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a ;
        for(ll i = 0 ; i < m ; i++) {
            
                a.push_back(nums1[i]) ;
            
        }
        
        for(ll i = 0 ; i < n ; i++) {
           
                a.push_back(nums2[i]) ;
            
        }
        sort(a.begin() , a.end()) ;
        nums1 = a ;
    }
};