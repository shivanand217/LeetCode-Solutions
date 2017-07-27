vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {

    vector<vector<int> > ans;
    if(!A)
    {
        return ans;
    }

    queue<pair<struct TreeNode *, int > > q;
    q.push(make_pair(A, 0));

    pair<TreeNode *, int> p;

    map<int, vector<int> > m;

    while(!q.empty())
    {
        p = q.front();
        q.pop();

        int vertical_distance = p.second;
        TreeNode *tmp = p.first;

        m[vertical_distance].push_back(tmp->val);

        if(tmp->left != NULL)
        {
            q.push(make_pair(tmp->left, vertical_distance-1));
        }

        if(tmp->right != NULL)
        {
            q.push(make_pair(tmp->right, vertical_distance+1));
        }
    }

    for(auto it=m.begin(); it != m.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}
