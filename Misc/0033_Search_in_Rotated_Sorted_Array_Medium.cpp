/**
 * Problem: 0033. Search in Rotated Sorted Array
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/search-in-rotated-sorted-array/
 * Language: cpp
 * Synced: 2026-05-14T18:21:01.250Z
 */
/* LeetSync Update Marker: submission:1870885238 */
#define ll int 
class Solution {
public:
    int search(vector<int>& a , int t) {
        ll low = 0 , high = a.size() - 1 ;

        while(low <= high) {
            ll mid = (low + high) / 2 ; 

            if(a[mid] == t) return mid ;

            if(a[low] <= a[mid]) {
                if(a[low] <= t && a[mid] > t) high = mid - 1 ; 
                else low = mid + 1 ;
            }
            else {
                if(a[mid] < t && a[high] >= t) low = mid + 1 ;
                else high = mid - 1 ;
            }
        }

        return -1 ;
    }
};