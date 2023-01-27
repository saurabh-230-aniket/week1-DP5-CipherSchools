void moveToFront(struct Node* head,struct Node* p, int m){
    if (head == NULL)
        return;
 
    p = head;
    head = head->next;
    m++;
    if (length == m){
        p->next = NULL;
        last->next = first;
        first = head;
    }
    else
        moveToFront(head, p, m);
}