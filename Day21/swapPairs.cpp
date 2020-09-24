// leetcode.com/problems/swap-pairs

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;

        ListNode* l = head->next;
        head->next = swapPairs(l->next);
        l->next = head;
        return l;
    }
};
