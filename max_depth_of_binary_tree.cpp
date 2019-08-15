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
    int depth=0;
    void recurse(TreeNode *node, int val) {
        if (node == NULL){
            return;
        }
        depth = max(val, depth);
        val = val + 1;
        recurse(node->left, val);
        recurse(node->right, val);
    }
    int maxDepth(TreeNode* root) {
        recurse(root,1);
        return depth;
    }
};