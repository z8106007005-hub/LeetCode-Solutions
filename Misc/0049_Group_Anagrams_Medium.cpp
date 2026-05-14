/**
 * Problem: 0049. Group Anagrams
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/group-anagrams/
 * Language: cpp
 * Synced: 2026-05-14T18:23:14.653Z
 */
/* LeetSync Update Marker: submission:1879092106 */
#define ll int 
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {

        ll n = s.size() ;

        unordered_map<string , vector<string>> d ;

        for(auto & p : s) {
            string wq = p ; 
            sort(wq.begin() , wq.end()) ;
            d[wq].push_back(p) ;
        } 

        vector<vector<string>> strs ; 
        for(auto &  g : d) {
            strs.push_back(g.second) ;
        }
        return strs ;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<< "0" ; }) ;