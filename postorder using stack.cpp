vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> s;
    s.push(A);
    map<TreeNode*,bool> visited;
    visited[A]=1;
    while(!s.empty())
    {
        TreeNode* node=s.top();
        if((node->left==NULL || visited[node->left]==1) && (node->right==NULL || visited[node->right]==1))
        {
            ans.push_back(node->val);
            s.pop();
        }
        else
        {
            if(node->left!=NULL && !visited[node->left])
            {
                s.push(node->left);
                visited[node->left]=1;
            }  
            else if(node->right!=NULL && !visited[node->right])
            {
                s.push(node->right);
                visited[node->right]=1;
            }   
        }
    }
    return ans;
}
