/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* node, int &ans, int L, int R) {
        if(node == NULL) {
            return;
        }
        if(node->val >= L && node->val <= R){
            ans += node->val;
        }
        dfs(node->left, ans, L, R);
        dfs(node->right, ans, L, R);
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        int ans = 0;
        dfs(root, ans, L, R);
        return ans;
    }
};