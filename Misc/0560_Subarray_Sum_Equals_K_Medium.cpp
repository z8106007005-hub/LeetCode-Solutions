/**
 * Problem: 0560. Subarray Sum Equals K
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/subarray-sum-equals-k/
 * Language: cpp
 * Synced: 2026-05-14T18:11:47.245Z
 */
/* LeetSync Update Marker: submission:1862031412 */
#define ll int 
class Solution {
public:
    int subarraySum(vector<int>& a , int k) {
        ll n = a.size() ;
        ll count = 0 ; 
        for(ll i = 0 ; i < n ; i++) {
            ll sum = a[i] ;
            if(a[i] == k) {
                count++ ;
            }
            for(ll j = i + 1 ; j < n ; j++) {
                sum += a[j] ;
                if(sum == k) {
                    count++ ;
                }
            }
        }
        return count ;

    }
};