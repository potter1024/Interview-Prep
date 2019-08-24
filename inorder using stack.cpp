vector<int> Solution::inorderTraversal(TreeNode* A) 
{
    vector<int> ans;
    stack<TreeNode*> s;
    s.push(A);
    map<TreeNode*,bool> visited;
    visited[A]=1;
    while(!s.empty())
    {
        TreeNode* node=s.top();
        if(node->left==NULL || visited[node->left]==1)
        {
            ans.push_back(node->val);
            s.pop();
            if(node->right!=NULL)
                s.push(node->right);
        }
        else
        {
            s.push(node->left);
            visited[node->left]=1;
        }
    }
    return ans;
}
