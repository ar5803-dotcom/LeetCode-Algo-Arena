// Intuition
// The intuition behind this approach is to first find the length of the linked list to determine the positions of the kth node from the beginning and from the end. Once we have the positions, we can swap the values of the nodes at those positions.

// Approach
// To implement this approach, we traverse the linked list once to find its length. Then, we traverse the list again to find the kth node from the beginning and from the end. After locating both nodes, we swap their values.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)

// Code
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
    ListNode* swapNodes(ListNode* head, int k) {

        int length = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            length++;
            curr = curr->next;
        }

        ListNode* node1 = head;
        for (int i = 1; i < k; i++) {
            node1 = node1->next;
        }

        ListNode* node2 = head;
        for (int i = 0; i < length - k; i++) {
            node2 = node2->next;
        }
        
        int temp = node1->val;
        node1->val = node2->val;
        node2->val = temp;
        
        return head;
    }
};