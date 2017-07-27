
void solve(TreeNode *root, int sum, vector<int> &curr, vector<vector<int> > &ans)
{
    if(root == NULL)
        return;

	sum = sum - root->val;
	curr.push_back(root->val);

    if(root->left == NULL && root->right == NULL)
	{
        if(sum == 0)
		{
            ans.push_back(curr);
		}
		curr.pop_back();
		return;
	}

	solve(root->left, sum, curr, ans);
    solve(root->right, sum, curr, ans);
	curr.pop_back();

    return;
}

vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {

    vector<vector<int> > ans;
    vector<int> curr;

    solve(root, sum, curr, ans);

    return ans;
}

