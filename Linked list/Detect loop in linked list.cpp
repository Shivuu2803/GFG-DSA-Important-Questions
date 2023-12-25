class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head == NULL && head->next == NULL)
        {
            return 0;
        }
        
        Node *slow = head;
        Node *fast = head;
        
        while(slow && fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                return 1;
            }
        }
        
        return 0;
    }
};
