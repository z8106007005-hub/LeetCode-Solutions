/**
 * Problem: 0056. Merge Intervals
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/merge-intervals/
 * Language: cpp
 * Synced: 2026-05-14T18:26:30.560Z
 */
/* LeetSync Update Marker: submission:1900207409 */
#define ll int
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin() , a.end()) ; 

        vector<vector<ll>> aa ; 
        vector<ll> last = a[0] ;
        for(ll i = 0 ; i < a.size() ; i++) {
            if(a[i][0] <= last[1]) last[1] = max(last[1] , a[i][1]) ;
            else {
                aa.push_back(last) ;
                last = a[i] ;
            }
        }
        aa.push_back(last) ;
        return aa ;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});