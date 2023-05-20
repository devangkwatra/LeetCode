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
    bool hasCycle(ListNode *head) {
        ListNode *dum = new ListNode;
        ListNode *curr = head;
        while(curr != NULL)
        {
            if(curr ->next == NULL)
                return false;
            if (curr -> next == dum)
                return true;
            ListNode *temp = curr->next;
            curr->next = dum;
            curr = temp;
        }
        return false;
    }
};
