/**
 * Problem: 3861. Minimum Capacity Box
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/minimum-capacity-box/
 * Language: cpp
 * Synced: 2026-05-14T18:06:54.813Z
 */
/* LeetSync Update Marker: submission:1941376117 */
#define ll int 
class Solution {
public:
    int minimumIndex(vector<int>& c, int itemSize) {
        ll min_count = INT_MAX ; 
        ll ans = -1 ; 
        for(ll i = 0 ; i < c.size() ; i++) {
            if(c[i] >= itemSize && min_count > c[i]) {
                min_count = c[i] ;
                ans = i ; 
            }
        }
        return ans  ;
    }
};