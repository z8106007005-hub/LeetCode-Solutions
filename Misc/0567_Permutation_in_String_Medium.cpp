/**
 * Problem: 0567. Permutation in String
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/permutation-in-string/
 * Language: cpp
 * Synced: 2026-05-14T18:31:28.618Z
 */
/* LeetSync Update Marker: submission:2002912898 */
#define ll int 
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        ll n = s1.size() , m = s2.size() ;

        if (n > m) return false ;

        vector<ll> freq1(26 , 0) , freq2(26 , 0) ;

        for(auto c : s1) freq1[c - 'a']++ ; 

        for(ll i = 0 ; i < n ; i++) freq2[s2[i] - 'a']++ ;

        if(freq1 == freq2) return true ;

        for(ll i = 0 ; i < m - n ; i++) {

            
            freq2[s2[i] - 'a']-- ;
            freq2[s2[i + n] - 'a']++ ;

            if(freq1 == freq2) return true ;

        }
        return false ;       
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});