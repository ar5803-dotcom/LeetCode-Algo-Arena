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
//Optimal Approach T.C: O(N) S.C.: O(1)

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head -> next == nullptr || k == 0)
            return head;
        int size = 1;
        ListNode* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
            ++size;
        }
        ListNode* headcopy = head;
        int rev = k%size;
        if( rev == 0) return head;
        int i = 0;
        ListNode* temp = new ListNode(0);
        while(i<size-rev-1){
            head = head -> next;
            i++;
        }
        temp -> next = head->next;
        curr -> next = headcopy;
        head -> next = NULL;
        return temp->next;
    }
};
