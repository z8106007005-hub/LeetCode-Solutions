/**
 * Problem: 3905. Multi Source Flood Fill
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/multi-source-flood-fill/
 * Language: cpp
 * Synced: 2026-05-14T18:09:12.949Z
 */
/* LeetSync Update Marker: submission:1982282882 */
class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        vector<vector<int>> grids(n , vector<int>(m , 0)) ;
        vector<vector<int>> paths(n , vector<int>(m , INT_MAX)) ;

        queue<tuple<int, int , int>>q ;
        for(auto & x : sources) {
            int a = x[0] , b = x[1] , c = x[2] ; 
            grids[a][b] = c ;
            paths[a][b] = 0 ;
            q.push({a , b , c}) ;
        }

        int dp[4][2] = {{1 , 0} , 
                        {-1 , 0} , 
                        {0 , 1} , 
                        {0 , -1}} ;

        while(!q.empty()) {
            auto[a , b , c] = q.front() ;
            q.pop() ;
            for(auto &d : dp) {
                int aa = a + d[0] ;
                int ab = b + d[1] ;

                if(aa < 0 || aa>= n || ab < 0 || ab >= m) continue ;

                if(paths[aa][ab] > paths[a][b] + 1) {
                    paths[aa][ab] = paths[a][b] + 1 ;
                    grids[aa][ab] = c ;
                    q.push({aa , ab , c}) ;
                }

                else if(paths[aa][ab] == paths[a][b] + 1) {
                    if(grids[aa][ab] < c) {
                        grids[aa][ab] = c ;
                        q.push({aa , ab , c}) ;
                    }
                }
            }
        }
        return grids ;
    }
};