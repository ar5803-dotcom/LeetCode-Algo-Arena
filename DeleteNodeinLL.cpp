// Intuition
// The intuition behind this approach is to swap the value of the current node with the value of its next node, effectively "deleting" the current node by bypassing it in the linked list.

// Approach
// We initialize a pointer curr to the next node of the given node. We then swap the values of node and curr. Finally, we update the next pointer of node to skip over curr, effectively "deleting" the node

// Complexity
// Time complexity:
// O(1)

// Space complexity:
// O(1)

// Code
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
    void deleteNode(ListNode* node) {
        ListNode* curr = node -> next;
        int temp = node->val;
        node->val = curr->val;
        curr->val = temp;
        node -> next = node -> next -> next; //curr->next 
    }
};