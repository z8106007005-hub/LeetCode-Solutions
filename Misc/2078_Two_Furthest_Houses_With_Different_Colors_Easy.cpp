/**
 * Problem: 2078. Two Furthest Houses With Different Colors
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
 * Language: cpp
 * Synced: 2026-05-14T18:09:29.661Z
 */
/* LeetSync Update Marker: submission:1983866929 */
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
    
        int ans = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(colors[i] != colors[0]) {
                ans = max(ans, i);
                break;
            }
        }

        for(int i = 0; i < n; i++) {
            if(colors[i] != colors[n - 1]) {
                ans = max(ans, (n - 1 - i));
                break;
            }
        }

    return ans;
    }
};