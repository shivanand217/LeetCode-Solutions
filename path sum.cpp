
bool ans(TreeNode *A, int sum)
{
    if (A == NULL) return false;

            if (A->left == NULL && A->right == NULL) {
                return sum == A->val;
            }

    int remainingSum = sum - A->val;
    return ans(A->left, remainingSum) || ans(A->right, remainingSum);
}

int Solution::hasPathSum(TreeNode* A, int B)
{
    if(ans(A, B))
    {
        return 1;
    }
    return 0;
}

