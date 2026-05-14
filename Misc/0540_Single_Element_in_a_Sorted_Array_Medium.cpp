/**
 * Problem: 0540. Single Element in a Sorted Array
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/single-element-in-a-sorted-array/
 * Language: cpp
 * Synced: 2026-05-14T18:21:16.633Z
 */
/* LeetSync Update Marker: submission:1871592797 */
#define ll int 
class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        ll high = a.size() - 1 , low = 0 ;
        while(low < high) {
            ll mid = (high + low) / 2 ;

            if(mid % 2 == 1) mid-- ;

            if(a[mid] == a[mid + 1]) low = mid + 2 ; 
            else high = mid ; 

        }
        return a[low] ;
    }
};