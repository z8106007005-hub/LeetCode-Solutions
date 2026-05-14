/**
 * Problem: 0125. Valid Palindrome
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/valid-palindrome/
 * Language: cpp
 * Synced: 2026-05-14T18:24:32.348Z
 */
/* LeetSync Update Marker: submission:1884824367 */
class Solution {
public:
    bool isPalindrome(string s) {
        string news ;

        for(auto ch : s) {
            if((ch <= 'z' && ch >= 'a') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) news += tolower(ch) ;
        }
        int n = news.size() ;
        for(int i = 0 ; i < n / 2 ; i++) {
            if(news[i] != news[n - i - 1]) return false ;
        }
        return true ;
    }
};