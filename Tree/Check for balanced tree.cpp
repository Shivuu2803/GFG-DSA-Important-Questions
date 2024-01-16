class Solution{
    public:
    
    bool isBalancedUtil(Node* root, int& height) 
    {
        if (root == NULL) 
        {
            height = -1;
            return true;
        }

        int leftHeight, rightHeight;

        bool leftBalanced = isBalancedUtil(root->left, leftHeight);
        bool rightBalanced = isBalancedUtil(root->right, rightHeight);

        height = max(leftHeight, rightHeight) + 1;

        return leftBalanced && rightBalanced && abs(leftHeight - rightHeight) <= 1;
    }
    
    bool isBalanced(Node *root)
    {
        int height = 0;
        return isBalancedUtil(root, height);
    }
};
