/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *a,*b,*c;
        if(!head)
        return NULL;
        if(!head->next)
        return head;
        a=NULL;
        b=head;
        c=head->next;
        while(b){
            b->next=a;
            a=b;
            b=c;
            if(!b)
            break;
            c=c->next;
        }
        
        return a;
    }
};