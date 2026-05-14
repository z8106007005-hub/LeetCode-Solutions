/**
 * Problem: 1886. Determine Whether Matrix Can Be Obtained By Rotation
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
 * Language: cpp
 * Synced: 2026-05-14T18:31:02.980Z
 */
/* LeetSync Update Marker: submission:2002875024 */
class Solution {
public:

    void rotates(vector<vector<int>> &mat) {
        int n = mat.size() ;

        for(int i = 0 ; i < n ; i++) {
            for(int j = i + 1 ; j < n ; j++) {
                swap(mat[i][j] , mat[j][i]) ;
            }
        }

        // swap rows 
        for(int i = 0 ; i < n ; i++) {
            reverse(mat[i].begin() , mat[i].end()) ;
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        // this loop will check 4 rotation at angle 
        // 0 , 90 , 180 , 270 
        for(int i = 0 ; i < 4 ; i++) {
            if(mat == target) {
                return true ;
            }
            rotates(mat) ;
        }
        return false ;
    }
};

// tc = O(n ^ 2) 
