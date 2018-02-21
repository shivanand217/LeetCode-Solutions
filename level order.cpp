/**
 * Definition for binary tree
 *
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution :: levelOrder( TreeNode* A ) {

    /** making a queue for level wise traversal **/
    queue< pair<int, struct TreeNode* > > q;
    /** first push root to the queue **/
    q.push(make_pair(0 , A));

    /** iterator to access values of node and level **/
    pair<int, struct TreeNode * > p;
    int prev = 0;

    /** vector of vectors to store or answer level wise **/
    vector<vector<int> > level;
    /** temporary vector to save each level one at a time **/
    vector<int> vec;

    int lev;
    struct TreeNode *tmp;

    while( !q.empty() ) {
        /** pop node from queue **/
        p = q.front();
        q.pop();

        tmp = p.second;
        lev = p.first;

        /** if level of current node is not equal to our last visited level **/
        if(lev != prev) {
            /** push current answer to level **/
            level.push_back(vec);
            /** clear temporary vector **/
            vec.clear();
            /** set new level to current level for further accessing **/
            prev = lev;
            vec.push_back(tmp->val);
            /** if left child of current node is not NULL push it with incrementing by one more than current node depth **/
            if( tmp->left != NULL ) {
                q.push(make_pair(prev+1, tmp->left));
            }
            /** similarly for right child **/
            if( tmp->right != NULL ) {
                q.push(make_pair(prev+1, tmp->right));
            }
        } else {
            /** otherwise this node has same level as our last level push it to the temporary vector**/
            vec.push_back( tmp->val );
            /** similar step as previous one **/
            if( tmp->left != NULL ) {
                q.push(make_pair(lev + 1, tmp->left));
            }
            if( tmp->right != NULL ) {
                q.push(make_pair(lev + 1, tmp->right));
            }
        }
    }

    level.push_back(vec);

    return level;
}
