/**
 * Problem: 3894. Traffic Signal Color
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/traffic-signal-color/
 * Language: cpp
 * Synced: 2026-05-14T18:08:23.843Z
 */
/* LeetSync Update Marker: submission:1975618320 */
class Solution {
public:
    string trafficSignal(int t) {
        if(t == 0) return "Green" ;
        if(t == 30) return "Orange" ; 
        if(t > 30 && t <= 90) return "Red" ;
        return "Invalid" ;
    }
};