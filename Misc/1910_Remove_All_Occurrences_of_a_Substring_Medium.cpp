/**
 * Problem: 1910. Remove All Occurrences of a Substring
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
 * Language: cpp
 * Synced: 2026-05-14T18:22:53.858Z
 */
/* LeetSync Update Marker: submission:1878748275 */
class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos ;
        while((pos = s.find(part)) != string::npos) {
            s.erase(pos , part.length()) ;
        }
        return s ;
    }
};