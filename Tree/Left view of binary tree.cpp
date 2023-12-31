vector<int> leftView(Node *root)
{
   vector<int> result;
    
    if (!root)
    {
        return result;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 1; i <= n; i++)
        {
            Node* temp = q.front();
            q.pop();

            if (i == 1)
            {
                result.push_back(temp->data);
            }

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }

    return result;
}
