class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        if (head == NULL || n <= 0) 
        {
            return -1;
        }

        Node *fast = head;
        Node *slow = head;

        for (int i = 0; i < n; ++i) 
        {
            if (fast == NULL) 
            {
                return -1;
            }
            fast = fast->next;
        }

        while (fast != NULL) 
        {
            fast = fast->next;
            slow = slow->next;
        }

        return (slow != NULL) ? slow->data : -1;
    }
};
