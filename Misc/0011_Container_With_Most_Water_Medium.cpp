/**
 * Problem: 0011. Container With Most Water
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/container-with-most-water/
 * Language: cpp
 * Synced: 2026-05-14T18:01:06.988Z
 */
/* LeetSync Update Marker: submission:1861262005 */
#define ll int
class Solution {
public:
    int maxArea(vector<int>& h) {
        ll lft = 0 ; 
        ll rit = h.size() - 1 ;
        ll max_area = 0 ;
        while(lft < rit) {
            ll area = min(h[lft] , h[rit]) ;
            area = area * (rit - lft) ;
            max_area = max(max_area , area) ;

            if(h[lft] < h[rit]) lft++ ;
            else rit-- ;
        }
        return max_area ;
    }
};