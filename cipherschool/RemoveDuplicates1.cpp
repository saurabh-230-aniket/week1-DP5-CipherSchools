class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t=head;
        if(!head)
            return NULL;
        while(t->next){
            if(t->val==t->next->val){
                ListNode*temp=t->next;
                t->next=t->next->next;
                delete temp;
            }
            else
            {
                t=t->next;
            }
        }
        return head;
    }
};