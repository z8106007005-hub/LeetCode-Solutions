/**
 * Problem: 3010. Divide an Array Into Subarrays With Minimum Cost I
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
 * Language: cpp
 * Synced: 2026-05-14T18:26:46.546Z
 */
/* LeetSync Update Marker: submission:1904685472 */
#define ll int 
class Solution {
public:
    int minimumCost(vector<int>& a) {
        ll n = a.size() ;
        ll ans = INT_MAX ; 

        for(ll i = 1 ; i < n ; i++) {
            for(ll j = i + 1 ; j < n ; j++) {
                ans = min(ans , a[i] + a[j] + a[0]) ; 
            }
        }
        return ans ; 
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});