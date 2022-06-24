class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode* current = head;
        ListNode* prev = nullptr;
        head = nullptr;

        while (current && current->next)
        {
            ListNode* n2 = prev;
            ListNode* n3 = current;
            ListNode* n4 = current->next;
            ListNode* n5 = current->next->next;

            if (n2)
                n2->next = n4;

            n4->next = n3;
            n3->next = n5;

            if (head == nullptr)
                head = n4;
            
            prev = n3;
            current = n5;
        }

        if (head == nullptr)
            head = current;

        return head;
    }
};