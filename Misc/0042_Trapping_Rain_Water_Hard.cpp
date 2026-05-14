/**
 * Problem: 0042. Trapping Rain Water
 * Difficulty: Hard
 * URL: https://leetcode.com/problems/trapping-rain-water/
 * Language: cpp
 * Synced: 2026-05-14T18:20:42.529Z
 */
/* LeetSync Update Marker: submission:1862991430 */
#define ll int 
class Solution {
public:
    int trap(vector<int>& h) {
        ll n = h.size() ;
        ll lft = 0 , right = n - 1 ; 
        ll lft_max = 0 , right_max = 0 ;
        ll water = 0 ;
        while(lft < right) {
            if(h[lft] < h[right]) {
                lft_max = max(lft_max , h[lft]) ;
                water += lft_max - h[lft] ;
                lft++ ;
            }
            else {
                right_max = max(right_max , h[right]) ;
                water += right_max - h[right] ;
                right-- ;
            }
        }
        return water ;
    }
};