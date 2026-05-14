/**
 * Problem: 3898. Find the Degree of Each Vertex
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/find-the-degree-of-each-vertex/
 * Language: cpp
 * Synced: 2026-05-14T18:08:27.561Z
 */
/* LeetSync Update Marker: submission:1975902588 */
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        vector<int> ans ;
        int n = m.size() ;
        for(int i = 0 ; i < n ; i++) {
            int maxi = 0 ; 
            int k = m[i].size() ;
            for(int j = 0 ; j < k ; j++) {
                if(m[i][j] == 1) maxi++ ;
            }
            ans.push_back(maxi) ;
        }
        return ans ;
    }
};