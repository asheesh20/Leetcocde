class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*n=head,*p=head;
        while(n){
            if(n==head){
               
                if(n->val==val)
                {head=n->next;
                p=head;
                }
                 n=n->next;
                
            }
            else{
                if(n->val==val){
                    p->next=n->next;
                    n=p->next;
                }
                else{
                    p=n;
                    n=n->next;
                }
            }
            
        }
        return head;
    }
};