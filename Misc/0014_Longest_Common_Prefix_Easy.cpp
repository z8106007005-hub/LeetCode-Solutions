/**
 * Problem: 0014. Longest Common Prefix
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/longest-common-prefix/
 * Language: cpp
 * Synced: 2026-05-14T18:22:06.027Z
 */
/* LeetSync Update Marker: submission:1875920041 */
#define ll int 
class Solution {
public:

    // string lcs (string a , string b) {

    // }
    string longestCommonPrefix(vector<string>& s) {
        string pre = s[0] ;
        ll num ;
        for(ll i = 0 ; i < s.size() ; ++i) {
            num = 0 ; 
            while(num < pre.size() && num < s[i].size() && pre[num] == s[i][num]) num++ ;
            pre = pre.substr(0 , num) ;
            // if(pre.size()) return "" ;
        }
        return pre ;
        
    }
};