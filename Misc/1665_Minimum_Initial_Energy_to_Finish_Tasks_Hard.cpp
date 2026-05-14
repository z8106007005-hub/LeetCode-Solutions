/**
 * Problem: 1665. Minimum Initial Energy to Finish Tasks
 * Difficulty: Hard
 * URL: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
 * Language: cpp
 * Synced: 2026-05-14T18:28:50.953Z
 */
/* LeetSync Update Marker: submission:2001422192 */
class Solution {
public:
    int minimumEffort(vector<vector<int>>& arr) {
        sort(arr.begin() , arr.end() , []
            (const vector<int> &a , const vector<int> &b) 
            {
                return (a[1] - a[0]) > (b[1] - b[0]) ;
            }
        ) ;

        int mini = 0 ;
        int maxi = 0 ;

        for (auto &x : arr) {

            int actual = x[0] ;
            int minimum = x[1] ;

            if (mini < minimum) {

                maxi += (minimum - mini) ;
                mini = minimum ;
            }

            mini -= actual ;
        }

        return maxi ;
    }
};