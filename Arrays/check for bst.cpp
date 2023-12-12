class Solution
{
    public:
    
    int pre = -1;
    void solve(Node* root, bool &flag)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(root == NULL)
        {
            return;
        }
        
        solve(root->left, flag);
        
        if(pre>= root->data)
        {
            flag = false;
        }
        else
        {
            pre = root-> data;
        }
        solve(root->right, flag);
    }
    
    bool isBST(Node* root) 
    {
        bool flag = true;
        solve(root,flag);
        return flag;
    }
};
