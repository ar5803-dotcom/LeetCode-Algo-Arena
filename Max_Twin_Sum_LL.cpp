/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        if (!head || !head->next) 
            return 0;

        int maxi = INT_MIN;

 
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

  
        ListNode* reversedSecondHalf = reverseList(slow);

   
        ListNode* head1 = head;
        ListNode* head2 = reversedSecondHalf;
        while (head1 && head2) {
            maxi = max(maxi, head1->val + head2->val);
            head1 = head1->next;
            head2 = head2->next;
        }

        return maxi;
    }

private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev; 
    }
};