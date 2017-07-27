void solve(TreeNode *root, int depth, int max_, int &min_)
{
    if(root == NULL)
	{
        return;
	}

    max_ = max(depth, max_);
    if(root->left == NULL && root->right == NULL)
	{
        min_ = min(min_, max_);
        return;
	}

    solve(root->left, depth+1, max_, min_);
    solve(root->right, depth+1, max_, min_);
    return;
}

int Solution::minDepth(TreeNode* A)
{
    int max_ = INT_MIN;
    int min_ = INT_MAX;

    solve(A, 1, max_, min_);
    return min_;
}
