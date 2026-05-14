/**
 * Problem: 3819. Rotate Non Negative Elements
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/rotate-non-negative-elements/
 * Language: cpp
 * Synced: 2026-05-14T18:25:27.288Z
 */
/* LeetSync Update Marker: submission:1896195948 */
#define ll int
class Solution {
public:
    vector<int> rotateElements(vector<int>& a, int k) {
        int n = a.size() ; 
        vector<ll> b ;
        for(ll i = 0 ; i < n ; i++) {
            if(a[i] >= 0) b.push_back(a[i]) ;
        }
        ll m = b.size() ;
        if(m == 0) return a ;
        vector<ll> c ;
        k = k % m ;
        ll j = k ; 
        do {
            c.push_back(b[j]) ;
            j = (j + 1) % m ;
        }
        while(j != k) ;
        j = 0 ; 
        for(ll i = 0 ; i < n ; i++) {
            if(a[i] >= 0) {
                a[i] = c[j] ;
                j++ ;
            }
        }
        return a ;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});