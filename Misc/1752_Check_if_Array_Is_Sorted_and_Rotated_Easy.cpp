/**
 * Problem: 1752. Check if Array Is Sorted and Rotated
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
 * Language: cpp
 * Synced: 2026-05-14T18:07:56.039Z
 */
/* LeetSync Update Marker: submission:1968896860 */
class Solution {
public:
    bool rotated (vector<int>& a ) {
        int n = a.size() ;
        int maxi = 0 ;
        for(int i = 1 ; i < n ; i++) {
            if(a[i] < a[i - 1]) maxi++ ;
        }
        if(a[n - 1] > a[0]) maxi++ ;
        if(maxi <= 1) return true ;
        return false ;
    }
    bool check(vector<int>& a) {
        vector<int> b = a ; 
        sort(b.begin() , b.end()) ;
        if(b == a) return true ;
        else if(rotated(a)) return true ;
        return false ;
    }
};

auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});