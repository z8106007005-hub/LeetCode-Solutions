/**
 * Problem: 2965. Find Missing and Repeated Values
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/find-missing-and-repeated-values/
 * Language: cpp
 * Synced: 2026-05-14T18:20:45.410Z
 */
/* LeetSync Update Marker: submission:1863016364 */
#define ll int 

class Solution {
public:
    vector<ll> findMissingAndRepeatedValues(vector<vector<ll>>& a) { // grid = a
        ll n = a.size() ;
        ll m = n * n ;
        // by using AP 
        ll exp_sum = (m * (m + 1)) / 2 ;
        long long exp_sq_sum = (long long)m * (m + 1) * (2 * m + 1) / 6 ;
        ll real_sum = 0 ; 
        ll real_sq_sum = 0 ; 
        for(ll i = 0 ; i < n ; i++) {
            for(ll j = 0 ; j < n ; j++) {
                real_sum += a[i][j] ;
                real_sq_sum += (long long)a[i][j] * a[i][j] ;
            }
        }
        // a - b   (a = missing no. , b = dublicate no.)
        ll diff = real_sum - exp_sum ; 
        ll sq_diff = real_sq_sum - exp_sq_sum ;
        ll div = sq_diff / diff ; 
        ll aa = (div + diff) / 2 ;
        ll bb = div - aa ; 
        return {aa , bb} ;
    }
};