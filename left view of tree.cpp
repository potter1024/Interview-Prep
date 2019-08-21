map<int,bool> m;
void recurse(Node* root,int level)
{
    if(root==NULL)
        return;
    if(!m[level])
    {
        m[level]=1;
        cout<<root->data<<" ";
    }
    recurse(root->left,level+1);
    recurse(root->right,level+1);
}
void leftView(Node *root)
{
   m.erase(m.begin(),m.end());
   recurse(root,0);
}
