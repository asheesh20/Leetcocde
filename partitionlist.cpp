class Solution {
public:
 ListNode* partition(ListNode* head, int x) 
    {
        vector<int> v;
        vector<int>v1;
        ListNode* temp=head;
        while(temp)
        {
            if(temp->val<x)
            {
                v.push_back(temp->val);
            }
            else
            {
                v1.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        int n1=v.size();
        int n2=v1.size();
        int i=0;
        while(i<n1)
        {
            temp->val=v[i];
            temp=temp->next;
            i++;
        }
        i=0;
        while(i<n2)
        {
            temp->val=v1[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};