Node *removeDuplicates(Node *head)
{
    Node *current = head;

    while (current != NULL && current->next != NULL) 
    {
        if (current->data == current->next->data) 
        {
            Node *temp = current->next;
            current->next = current->next->next;
            delete temp;
        } 
        else 
        {
            current = current->next;
        }
    }

    return head;
}
