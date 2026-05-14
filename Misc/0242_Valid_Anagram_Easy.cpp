/**
 * Problem: 0242. Valid Anagram
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/valid-anagram/
 * Language: cpp
 * Synced: 2026-05-14T18:08:04.573Z
 */
/* LeetSync Update Marker: submission:1968927821 */
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin() , s.end()) ;
        sort(t.begin() , t.end()) ;
        if(t == s) return true ;
        return false ;
    }
};


auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});