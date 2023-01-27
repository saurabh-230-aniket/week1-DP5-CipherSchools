/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void *RemoveCycle(ListNode *head) {
         if(!head)
         return NULL;
         ListNode* p=head;
         ListNode* q=p;
         do{
             p=p->next;
             if(q->next)
             q=q->next->next;
         }while(p!=q and q and q->next);
         if(p!=q)
         return NULL;
         int l=0;
         do{
             p=p->next;
             l++;
         }while(p!=q);
         p=head;
         q=head;
         while(l--){
             q=q->next;
         }
         ListNode* prev=NULL;
          while(p!=q){
            prev=q;
            p=p->next;
            q=q->next;
        }
        prev->next=NULL;
    }
};