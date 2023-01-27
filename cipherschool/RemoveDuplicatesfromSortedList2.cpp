class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
        return NULL;
        if(!head->next)
        return head;
        if(head->val == head->next->val){
            while(head and head->next and head->val == head->next->val){
                int v=head->val;
                while(head and head->val==v){
                    head=head->next;
                }
            }
        }
        if(!head)
        return NULL;
        ListNode* p=head,*q=NULL;
        while(p){
            if(p->next and p->val==p->next->val){
                int v=p->val;
                while(p and p->val == v){
                    p=p->next;
                }
                q->next=p;
            }
            else{
                q=p;
                p=p->next;
            }
           
        }

        return head;
    }
};