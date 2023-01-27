class Solution {
public:
    void add(ListNode* l,ListNode* r,ListNode* &ans,ListNode* &t,int c){
        if(l and r){
            int s = l->val + r->val+c;
            int c=s/10;
            int d=s%10;
            if(!ans){
                ans=new ListNode(d);
                t=ans;
            }
            else{
                t->next=new ListNode(d);
                t=t->next;
            }
            add(l->next,r->next,ans,t,c);
        }
        else if(!l and r){
            if(r)
            {
                int s=r->val+c;
                int d=s%10;
                c=s/10;
                if(!ans)
                ans=t=new ListNode(d);
                else{
                t->next=new ListNode(d);
                t=t->next;
                }
                add(l,r->next,ans,t,c);
            }
        }
        else if(!r and l){
            if(l){ 
            int s=l->val+c;
            int d=s%10;
            c=s/10;
            if(!ans)
                ans=t=new ListNode(d);
            else{
                t->next=new ListNode(d);
                t=t->next;
            }
            add(l->next,r,ans,t,c);
            }
        }
        else{
            if(c!=0){
                t->next=new ListNode(c);
                t=t->next;
                return;
            }
        }
        


    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        int d;
        ListNode* ans=NULL;
        ListNode* t=NULL;

        add(l1,l2,ans,t,c);
        return ans;
        while(l1 and l2){
            int s=l1->val + l2->val +c;
            c=s/10;
            d=s%10;
            if(!ans){
                ans=new ListNode(d);
                t=ans;
            }
            else{
                t->next=new ListNode(d);
                t=t->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            // add(ans,l1->val+c);
            int s=l1->val+c;
            c=s/10;
            d=s%10;
            if(!ans){
                ans=new ListNode(d);
                t=ans;
            }
            else{
                t->next=new ListNode(d);
                t=t->next;
            }
            l1=l1->next;
        }
        while(l2){
            // add(ans,l2->val+c);
            int s=l2->val+c;
            c=s/10;
            d=s%10;
            if(!ans)
                ans=t=new ListNode(d);
            else{
                t->next=new ListNode(d);
                t=t->next;
            }
            l2=l2->next;
        }
        if(c!=0)
            t->next=new ListNode(1);
        return ans;
    }
};