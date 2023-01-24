/*
 * @lc app=leetcode id=395 lang=cpp
 *
 * [395] Longest Substring with At Least K Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/description/
 *
 * algorithms
 * Medium (44.81%)
 * Likes:    5004
 * Dislikes: 405
 * Total Accepted:    180.5K
 * Total Submissions: 402.8K
 * Testcase Example:  '"aaabb"\n3'
 *
 * Given a string s and an integer k, return the length of the longest
 * substring of s such that the frequency of each character in this substring
 * is greater than or equal to k.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "aaabb", k = 3
 * Output: 3
 * Explanation: The longest substring is "aaa", as 'a' is repeated 3 times.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "ababbc", k = 2
 * Output: 5
 * Explanation: The longest substring is "ababb", as 'a' is repeated 2 times
 * and 'b' is repeated 3 times.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length <= 10^4
 * s consists of only lowercase English letters.
 * 1 <= k <= 10^5
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int longestSubstring(string s, int k) {
        vector<vector<int>> dp(s.length(),vector<int> (27,0));
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                cout<<dp[i][j];
            }
            cout<<endl;
        }
        
        
        return 0;
    }
};
// @lc code=end

