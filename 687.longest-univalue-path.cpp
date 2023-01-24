/*
 * @lc app=leetcode id=687 lang=cpp
 *
 * [687] Longest Univalue Path
 *
 * https://leetcode.com/problems/longest-univalue-path/description/
 *
 * algorithms
 * Medium (40.23%)
 * Likes:    3701
 * Dislikes: 642
 * Total Accepted:    159K
 * Total Submissions: 394.5K
 * Testcase Example:  '[5,4,5,1,1,null,5]'
 *
 * Given the root of a binary tree, return the length of the longest path,
 * where each node in the path has the same value. This path may or may not
 * pass through the root.
 * 
 * The length of the path between two nodes is represented by the number of
 * edges between them.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: root = [5,4,5,1,1,null,5]
 * Output: 2
 * Explanation: The shown image shows that the longest path of the same value
 * (i.e. 5).
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: root = [1,4,5,4,4,null,5]
 * Output: 2
 * Explanation: The shown image shows that the longest path of the same value
 * (i.e. 4).
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * The number of nodes in the tree is in the range [0, 10^4].
 * -1000 <= Node.val <= 1000
 * The depth of the tree will not exceed 1000.
 * 
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int g_res = 0;
    int longestUnivaluePath(TreeNode* root) {
        int res = 0;
        helper(root,root->val,res);
        return g_res;
    }
    
    void helper(TreeNode * root,int target,int &res){
        g_res = max(res,g_res);
        if(root == NULL){
            return;
        }
        if(root->val == target){
            i
            res++;
            
            helper(root->left,target,res);
            helper(root->right,target,res);
        }
            
        else {
            res=0;
            helper(root->left,root->val,res);
            helper(root->right,root->val,res);
        }
    
    }
};
// @lc code=end

