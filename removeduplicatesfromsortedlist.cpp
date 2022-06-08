class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return 0;
        ListNode* pointer;
        pointer=head;
        while(pointer->next!=NULL){
            if(pointer->next->val==pointer->val)
                pointer->next=pointer->next->next;
            else
                pointer=pointer->next;
        }
        return head;
    }
};