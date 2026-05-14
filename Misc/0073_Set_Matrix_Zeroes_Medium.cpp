/**
 * Problem: 0073. Set Matrix Zeroes
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/set-matrix-zeroes/
 * Language: cpp
 * Synced: 2026-05-14T18:01:21.270Z
 */
/* LeetSync Update Marker: submission:1861671473 */
#define ll int
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        ll n = m.size();
        ll k = m[0].size();

        bool fist_row = false, fist_col = false;

        for(ll j = 0; j < k; j++)
            if(m[0][j] == 0) fist_row = true;

        for(ll i = 0; i < n; i++)
            if(m[i][0] == 0) fist_col = true;

        for(ll i = 1; i < n; i++) {
            for(ll j = 1; j < k; j++) {
                if(m[i][j] == 0) {
                    m[0][j] = 0;
                    m[i][0] = 0;
                }
            }
        }

        for(ll j = 1; j < k; j++) {
            if(m[0][j] == 0) {
                for(ll i = 1; i < n; i++)
                    m[i][j] = 0;
            }
        }

        for(ll i = 1; i < n; i++) {
            if(m[i][0] == 0) {
                for(ll j = 1; j < k; j++)
                    m[i][j] = 0;
            }
        }

        if(fist_row)
            for(ll j = 0; j < k; j++) m[0][j] = 0;

        if(fist_col)
            for(ll i = 0; i < n; i++) m[i][0] = 0;
    }
};
