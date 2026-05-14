/**
 * Problem: 3798. Largest Even Number
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/largest-even-number/
 * Language: cpp
 * Synced: 2026-05-14T18:24:12.696Z
 */
/* LeetSync Update Marker: submission:1884823422 */
class Solution {
public:
    string largestEven(string s) {
        // long long n = stoll(s);
        // while (n > 0 && (n % 10) % 2 != 0) {
        //     n /= 10 ;
        // }
        // if(n == 0) return "" ;
        // s = to_string(n) ;
        // return s ;
        while (!s.empty() && ((s.back() - '0') % 2 != 0)) {
            s.pop_back() ;
        }

        return s ;
    }
};
// auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});