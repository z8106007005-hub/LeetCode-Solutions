/**
 * Problem: 0074. Search a 2D Matrix
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/search-a-2d-matrix/
 * Language: cpp
 * Synced: 2026-05-14T18:01:15.051Z
 */
/* LeetSync Update Marker: submission:1861280635 */
#define ll int 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(ll i = 0 ; i < matrix.size() ; i++) {
            for(ll j = 0 ; j < matrix[i].size() ; j++) {
                if(matrix[i][j] == target) return true ;
            }
        }
        return false ;
    }
};