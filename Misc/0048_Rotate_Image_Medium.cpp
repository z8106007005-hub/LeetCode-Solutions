/**
 * Problem: 0048. Rotate Image
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/rotate-image/
 * Language: cpp
 * Synced: 2026-05-14T18:30:49.311Z
 */
/* LeetSync Update Marker: submission:2002857851 */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // using transpose method 

        int n = matrix.size() ;
        //int m = matrix[0].size() ; 

        for(int i = 0 ; i < n ; i++) {
            for(int j = i + 1 ; j < n ; j++) {
                swap(matrix[i][j] , matrix[j][i]) ;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            reverse(matrix[i].begin() , matrix[i].end()) ;
        }
    }
};