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
    void dfs(TreeNode *node, bool &univalued, int value){
        if(node == NULL){
            return;
        }
        if(node->val != value){
            univalued = false;
        }
        dfs(node->left, univalued, value);
        dfs(node->right, univalued, value);
    }
    bool isUnivalTree(TreeNode* root) {
        bool isUnivaluedTree = true;
        dfs(root->left, isUnivaluedTree, root->val);
        dfs(root->right, isUnivaluedTree, root->val);
        return isUnivaluedTree;
    }
};