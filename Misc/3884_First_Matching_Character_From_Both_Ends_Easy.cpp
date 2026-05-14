/**
 * Problem: 3884. First Matching Character From Both Ends
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/first-matching-character-from-both-ends/
 * Language: cpp
 * Synced: 2026-05-14T18:07:06.244Z
 */
/* LeetSync Update Marker: submission:1963143465 */
class Solution {
public:
    int firstMatchingIndex(string s) {
        long long n = s.size() ;
        vector<int> vis(130 , 0) ;

        for(int i = 0 ; i < n ; i++) {
            if(s[i] == s[n - i - 1]) return i ; 
        }
        
        return -1 ;
    }
};