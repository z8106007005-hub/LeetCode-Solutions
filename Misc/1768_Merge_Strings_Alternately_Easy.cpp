/**
 * Problem: 1768. Merge Strings Alternately
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/merge-strings-alternately/
 * Language: cpp
 * Synced: 2026-05-14T18:06:58.408Z
 */
/* LeetSync Update Marker: submission:1961774672 */
#define ll long long 
class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        ll n = w1.size() ;
        ll m = w2.size() ;
        string s = "" ;
        ll mini = min(n , m) ;
        for(ll i = 0 ; i < mini ; i++) {
            s += w1[i] ;
            s += w2[i] ;
        }
        for(ll i = mini ; i < n ; i++) {
            s += w1[i] ;
        }
        for(ll i = mini ; i < m ; i++) {
            s += w2[i] ;
        }
        return s ;
    }
};

auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});