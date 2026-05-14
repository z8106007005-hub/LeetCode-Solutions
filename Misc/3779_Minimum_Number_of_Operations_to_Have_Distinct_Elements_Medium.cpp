/**
 * Problem: 3779. Minimum Number of Operations to Have Distinct Elements
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements/
 * Language: cpp
 * Synced: 2026-05-14T18:00:44.804Z
 */
/* LeetSync Update Marker: submission:1860759189 */
#define ll int 
class Solution {
public:
    bool dublicate(vector<ll> & a , ll strt ){
        unordered_set<ll> b ; 
        for(ll i = strt ; i < a.size() ; i++) {
            if(b.count(a[i])) return true ; 
            b.insert(a[i]) ;
        }
        return false ;
    }
    int minOperations(vector<int>& nums) {
        ll n = nums.size() ;

        // bool f = dublicate(nums , 0) ;
        
        // if(n <= 3 && f ) return 1 ; 
        // else if(n <= 3) return 0 ;
        // if(!f) return 0 ;
        
        // ll ops = 1 ;
        
        // for(ll i = 3 ; i < n ; i = i + 3) {
        //     if(dublicate(nums , i)){
        //         ops++ ;
        //     }
        //     else break ;
        // }
        // return ops ;

        // unordered_set<ll> st ;
        // ll dubli = -1 ; 
        // for(ll i = n - 1 ; i >= 0 ; i--) {
        //     if(st.count(nums[i])) {
        //         dubli = i ;
        //     }
        //     st.insert(nums[i]); 
            
        // }

        // if(dubli == -1) return 0 ;

        // return (dubli + 3 ) / 3 ;

        unordered_map<ll , ll > st ;
        for(ll i = nums.size() - 1 ;i >= 0 ; i--){
            if(st.find(nums[i]) != st.end() ) {
                return ceil( (double) (i + 1) / 3) ;
            }
            else st[nums[i]]++ ;
        }
        return 0;

        
    }
};