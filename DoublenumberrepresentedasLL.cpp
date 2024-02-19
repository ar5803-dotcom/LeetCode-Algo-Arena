class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        int carry = 0;
        ListNode* ptr = head;
        while (ptr) {
            int value = ptr->val * 2 + carry;
            ptr->val = value % 10;
            carry = value / 10;
            if (ptr->next == NULL && carry) {
                ptr->next = new ListNode(carry);
                ptr = ptr->next;
            }
            ptr = ptr->next;
        }
        return reverse(head);
    }

};
