/**
 * Problem: 0004. Median of Two Sorted Arrays
 * Difficulty: Hard
 * URL: https://leetcode.com/problems/median-of-two-sorted-arrays/
 * Language: cpp
 * Synced: 2026-05-14T18:21:46.977Z
 */
/* LeetSync Update Marker: submission:1875276460 */
#define ll int 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a , vector<int>& b) {
        ll n = a.size() ;
        ll m = b.size() ; 
        
        a.insert(a.end() , b.begin() , b.end()) ;
        sort(a.begin() , a.end()) ;

        if(a.size() % 2 == 0) {
            ll u = n + m ;
            double v = (a[u / 2 - 1] + a[u / 2]) / 2.0 ;   
            return v ;
        }
        else {
            ll u = n + m ;
            double v = a[u / 2];   
            return v ;
        }

        return -1 ;
    }
};



// double findMedianSortedArrays(vector<int>& a , vector<int>& b) {
//         ll n = a.size() ;
//         ll m = b.size() ; 
//         vector<ll> c(n + m) ;
//         for(ll i = 0 ; i < n ; i++) c[i] = a[i] ; 
//         for(ll i = 0 ; i < m ; i++) c[i + n] = b[i] ;
//         sort(c.begin() , c.end()) ;
//         if(c.size() % 2 == 0) {
//             ll u = n + m ;
//             double v = (c[u / 2 - 1] + c[u / 2]) / 2.0 ;   
//             return v ;
//         }
//         else {
//             ll u = n + m ;
//             double v = c[u / 2];   
//             return v ;
//         }
//         return -1 ;
//     }