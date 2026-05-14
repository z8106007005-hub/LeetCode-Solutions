/**
 * Problem: 3889. Mirror Frequency Distance
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/mirror-frequency-distance/
 * Language: cpp
 * Synced: 2026-05-14T18:08:08.151Z
 */
/* LeetSync Update Marker: submission:1969104991 */
class Solution {
public:
    int mirrorFrequency(string s) {
        int n = s.size() ; 
        int maxi = 0 ;
        // map<char , int> mp1 , mp2 ;
        // for(int i = 0 ; i < n ; i++) mp1[s[i]]++ ; 
        vector<int> a (128 , 0) ;
        for(auto X : s) {
            a[X]++ ;
        }
        
        for(char i = 'a' ; i <= 'm' ; i++) { // 26 / 2 
            char d = 'z' - (i - 'a') ;
            maxi += abs(a[i] - a[d]) ;
        }

        for(char i = '0' ; i <= '4' ; i++) {
            char d = '9' - (i - '0') ;
            maxi += abs(a[i] - a[d]) ;
        }
        return maxi ;
    }
};