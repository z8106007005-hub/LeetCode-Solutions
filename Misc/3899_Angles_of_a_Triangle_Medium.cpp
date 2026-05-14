/**
 * Problem: 3899. Angles of a Triangle
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/angles-of-a-triangle/
 * Language: cpp
 * Synced: 2026-05-14T18:08:31.611Z
 */
/* LeetSync Update Marker: submission:1975934948 */
class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double x = (double)sides[0] , y = (double)sides[1] , z = (double)sides[2] ;

        if(x + y <= z || y + z <= x || x + z <= y) {
            return {} ;
        }

        double a1 = acos((y * y + z * z - x * x) / (2 * y * z)) * 180 / M_PI ;
        double a2 = acos((x * x + z * z - y * y) / (2 * x * z)) * 180 / M_PI ;
        double a3 = acos((x * x + y * y - z * z) / (2 * x * y)) * 180 / M_PI ;
        vector<double> ans ;
        ans.push_back(a1) ; 
        ans.push_back(a2) ;
        ans.push_back(a3) ;
        sort(ans.begin() , ans.end()) ;
        return ans ;
    }
};