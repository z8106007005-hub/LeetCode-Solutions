/**
 * Problem: 3843. First Element with Unique Frequency
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/first-element-with-unique-frequency/
 * Language: cpp
 * Synced: 2026-05-14T18:06:51.051Z
 */
/* LeetSync Update Marker: submission:1919614453 */
#define ll int 
class Solution {
public:
    int firstUniqueFreq(vector<int>& a) {
        ll n = a.size() ;
        
        unordered_map<ll , ll> freq1 ; 
        unordered_map<ll , ll> freq2 ;

        for(auto & s : a) {
            freq1[s]++ ;
        }
        for(auto &s : freq1) {
            freq2[s.second]++ ; 
        }

        for(auto &s : a) {
            if(freq2[freq1[s]] == 1) return  s ;
        }
        return -1 ;
    }
};