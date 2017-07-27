void solve(TreeNode *root, int depth, int &max_)
{
    if(root == NULL)
	{
        return;
	}

    max_ = max(depth, max_);
    solve(root->left, depth+1, max_);
    solve(root->right, depth+1, max_);
    return;
}

int Solution::maxDepth(TreeNode* A) {

    int max_ = INT_MIN;
    solve(A, 1, max_);
    return max_;
}
