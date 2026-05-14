/**
 * Problem: 0189. Rotate Array
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/rotate-array/
 * Language: cpp
 * Synced: 2026-05-14T18:09:41.765Z
 */
/* LeetSync Update Marker: submission:1999995579 */
class Solution {
public:
    void rotate(vector<int>& a ,int k) {

        // if k > n then 
        k = k % a.size() ; 
        //divide and conquor
        reverse(a.begin() , a.end()) ; 
        reverse(a.begin() , a.begin() + k) ;
        reverse(a.begin() + k , a.end()) ;
    }
};