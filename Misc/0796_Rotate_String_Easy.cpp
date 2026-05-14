/**
 * Problem: 0796. Rotate String
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/rotate-string/
 * Language: cpp
 * Synced: 2026-05-14T18:30:33.407Z
 */
/* LeetSync Update Marker: submission:2002857450 */
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return 1 == 0 ;
        string s2 = s + s ; 
        return (s2.find(goal) != string::npos) ;
    }
};