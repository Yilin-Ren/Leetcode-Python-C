class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* cur = dummyhead;
        while(cur->next != nullptr && cur->next->next != nullptr){
            ListNode* temp = cur->next;
            ListNode* tmp1 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next = temp;
            cur->next->next->next = tmp1;
            cur = cur->next->next;
        }

        return dummyhead->next;
        delete dummyhead;
    }
};
