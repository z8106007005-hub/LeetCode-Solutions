/**
 * Problem: 0075. Sort Colors
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/sort-colors/
 * Language: cpp
 * Synced: 2026-05-14T18:01:10.917Z
 */
/* LeetSync Update Marker: submission:1861267538 */
#define ll int
class Solution {
public:
    void sortColors(vector<int>& n) {
        for(ll i = 0 ; i < n.size() - 1 ; i++) {
            for(ll j = i ; j < n.size() ; j++){
                if(n[i] > n[j]) swap(n[i] , n[j]) ;
            }
        }
    }
};