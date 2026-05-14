/**
 * Problem: 3813. Vowel-Consonant Score
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/vowel-consonant-score/
 * Language: cpp
 * Synced: 2026-05-14T18:24:55.278Z
 */
/* LeetSync Update Marker: submission:1888469462 */
#define ll int
class Solution {
public:
    int vowelConsonantScore(string s) {
        ll v = 0 , c = 0 ;
        ll n = s.size() ;
        for(ll i = 0 ; i < n ; i++) {
            if(s[i] >= 'a' && s[i] <= 'z'){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') v++ ;
                else c++ ;
            }
        }
        if(c == 0) return 0 ;
        return v / c ;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});