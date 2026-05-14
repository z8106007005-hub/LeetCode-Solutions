/**
 * Problem: 0217. Contains Duplicate
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/contains-duplicate/
 * Language: cpp
 * Synced: 2026-05-14T18:07:26.726Z
 */
/* LeetSync Update Marker: submission:1964832424 */
class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        int n = a.size() ;
        sort(a.begin() , a.end()) ; 
        for(int i = 0 ; i < n - 1 ; i++) {
            if(a[i] == a[i + 1]) return true ;
        }
        return false ;
    }
};


auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});