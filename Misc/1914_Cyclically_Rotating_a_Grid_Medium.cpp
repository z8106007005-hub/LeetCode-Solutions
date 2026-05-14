/**
 * Problem: 1914. Cyclically Rotating a Grid
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/cyclically-rotating-a-grid/
 * Language: cpp
 * Synced: 2026-05-14T18:09:33.444Z
 */
/* LeetSync Update Marker: submission:1999053212 */
#define ll long long 

class Solution {
public:

    vector<int> rotate(vector<int> arr , int k) {

        int n = arr.size();

        int shift = k % n;

        vector<int> roti(n);

        for(int i = 0 ; i < n ; i++) {
            roti[i] = arr[(i + shift) % n];
        }

        return roti;
    }

    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {

        int wid = grid.size();
        int len = grid[0].size();

        int mini = min(wid , len) / 2;

        for(int i = 0 ; i < mini ; i++) {

            vector<int> a;

            int top = i;
            int bottom = wid - i - 1;
            int left = i;
            int right = len - i - 1;

            // top row
            for(int j = left ; j <= right ; j++) {
                a.push_back(grid[top][j]);
            }

            // right column
            for(int j = top + 1 ; j <= bottom ; j++) {
                a.push_back(grid[j][right]);
            }

            // bottom row
            for(int j = right - 1 ; j >= left ; j--) {
                a.push_back(grid[bottom][j]);
            }

            // left column
            for(int j = bottom - 1 ; j > top ; j--) {
                a.push_back(grid[j][left]);
            }

            // rotate layer
            a = rotate(a , k);

            int index = 0;

            // top row
            for(int j = left ; j <= right ; j++) {
                grid[top][j] = a[index++];
            }

            // right column
            for(int j = top + 1 ; j <= bottom ; j++) {
                grid[j][right] = a[index++];
            }

            // bottom row
            for(int j = right - 1 ; j >= left ; j--) {
                grid[bottom][j] = a[index++];
            }

            // left column
            for(int j = bottom - 1 ; j > top ; j--) {
                grid[j][left] = a[index++];
            }
        }

        return grid;
    }
};