class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      if (!head || !head->next)
            return head;

        unordered_set<int> seen;
        Node* current = head;
        Node* prev = nullptr;

        while (current) 
        {
            if (seen.find(current->data) != seen.end()) 
            {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } 
            else 
            {
                seen.insert(current->data);
                prev = current;
                current = current->next;
            }
        }

        return head;
    }
};
