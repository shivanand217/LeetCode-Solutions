/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int level;
    int dfs(Node* node){   
        if(!node) return 0;
        int lvl = 0;
        for(int i=0;i<node->children.size();i++)
            lvl = max(lvl, dfs(node->children[i]));
        return lvl+1;
    }
    int maxDepth(Node* root) {
        return dfs(root);
    }
};