Node* sortedMerge(Node* head1, Node* head2)  
{  
    if (!head1 || !head2)
    {
        return head1 ? head1 : head2;
    }
    if (head1->data > head2->data)
    {
        swap(head1, head2);
    }
    
    head1->next = sortedMerge(head1->next, head2);
    
    return head1;
}  
