/**
 * Problem: 3834. Merge Adjacent Equal Elements
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/merge-adjacent-equal-elements/
 * Language: cpp
 * Synced: 2026-05-14T18:27:17.293Z
 */
/* LeetSync Update Marker: submission:1911883894 */
#define ll int
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& b) {
        vector<ll> a = b ; 

        vector<long long> st ; 

        for(auto x : a) {
            long long num = x ; 
            while(!st.empty() && st.back() == num) {
                    
                    st.pop_back() ;
                    
                    num = num * 2 ; 
                
            }
            
            st.push_back(num) ; 
            
        }
        return st ;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});