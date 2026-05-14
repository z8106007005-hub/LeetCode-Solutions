/**
 * Problem: 0852. Peak Index in a Mountain Array
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/peak-index-in-a-mountain-array/
 * Language: cpp
 * Synced: 2026-05-14T18:21:32.180Z
 */
/* LeetSync Update Marker: submission:1871594321 */
#define ll int 
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // ll n = arr.size() ;
        // ll peak = 0 ;
        // for(ll i = 0 ; i < n ; ++i) {
        //     if(arr[i] >= arr[peak]) peak = i ;
        // }
        // return peak ;

        ll high = arr.size() - 1 , low = 0 ;
        while(low < high) {
            ll mid = (high + low) / 2 ;

            if(arr[mid] < arr[mid + 1]) low = mid + 1 ; 
            else high = mid ; 

        }
        return low ;

    }
};