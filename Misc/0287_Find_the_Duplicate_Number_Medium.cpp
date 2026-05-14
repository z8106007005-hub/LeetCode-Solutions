/**
 * Problem: 0287. Find the Duplicate Number
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/find-the-duplicate-number/
 * Language: cpp
 * Synced: 2026-05-14T18:01:25.590Z
 */
/* LeetSync Update Marker: submission:1861739148 */
#define ll int 
class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size() ;
        unordered_map<ll , ll> mp ;
        for(ll i = 0 ; i < n ; i++) {
            mp[a[i]]++ ;
        }
        vector<pair<ll , ll>> b(mp.begin() , mp.end()) ;
        sort(b.rbegin() , b.rend() , [](const pair<ll , ll> &x , const pair<ll , ll> &y)
        {
            return x.second < y.second ;
        }) ;

        return b[0].first ;
    }
};/*
 * ------------------------------------------------------------
 * LeetSync appended newer accepted solution
 * LeetSync Update Marker: submission:1861744370
 * Appended At: 2026-05-14T18:01:30.401Z
 * ------------------------------------------------------------
 *//**
 * Problem: 0287. Find the Duplicate Number
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/find-the-duplicate-number/
 * Language: cpp
 * Synced: 2026-05-14T18:01:29.971Z
 */
/* LeetSync Update Marker: submission:1861744370 */
#define ll int 
class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size() ;
        unordered_set<ll> mp ;
        for(ll i : a) {
            if(mp.count(i)) return i ;
            mp.insert(i) ;
        }
        return -1 ;
    }
};/*
 * ------------------------------------------------------------
 * LeetSync appended newer accepted solution
 * LeetSync Update Marker: submission:1861751227
 * Appended At: 2026-05-14T18:05:32.011Z
 * ------------------------------------------------------------
 *//**
 * Problem: 0287. Find the Duplicate Number
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/find-the-duplicate-number/
 * Language: cpp
 * Synced: 2026-05-14T18:05:32.007Z
 */
/* LeetSync Update Marker: submission:1861751227 */
#define ll int 
class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size() ;
        ll slo = a[a[0]] ; 
        ll fst = a[a[a[0]]] ;
        while(slo != fst) {
            slo = a[slo] ;
            fst = a[a[fst]] ;
        }
        slo = a[0] ;
        while(slo != fst) {
            slo = a[slo] ;
            fst = a[fst] ;
        }
        return slo ;
    }
};