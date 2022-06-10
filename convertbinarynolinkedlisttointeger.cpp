class Solution {
public:
    void reverse(ListNode** head)
    {
        ListNode* curr = *head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        *head = prev;
    }
    int getDecimalValue(ListNode* head) {
        reverse(&head);
        int retVal = 0;
        int power = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            int value = temp->val;
            retVal += value*pow(2,power);
            temp = temp->next;
            power++;
        }
        return retVal;
    }
};