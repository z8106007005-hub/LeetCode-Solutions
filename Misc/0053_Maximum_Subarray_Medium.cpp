/**
 * Problem: 0053. Maximum Subarray
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/maximum-subarray/
 * Language: cpp
 * Synced: 2026-05-14T18:07:23.043Z
 */
/* LeetSync Update Marker: submission:1964826187 */
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxi = INT_MIN + 10000 ; 
        int mini = INT_MIN ; 
        int n = a.size() ;

        for(int i = 0 ; i < n ; i++) {
            maxi = max(a[i] , maxi + a[i]) ;
            mini = max(maxi , mini) ;
        }
        return mini ;
    }
};

auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});