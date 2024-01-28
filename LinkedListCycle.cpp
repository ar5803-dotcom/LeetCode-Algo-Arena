// Intuition
// The intuition behind this approach is to use two pointers, a slow pointer and a fast pointer, to traverse the linked list. The slow pointer moves one step at a time while the fast pointer moves two steps at a time. If there is a cycle in the linked list, eventually the fast pointer will catch up to the slow pointer, indicating the presence of a cycle.

// Approach
// We initialize both pointers to the head of the linked list. Then, in each iteration, we move the slow pointer one step forward and the fast pointer two steps forward. If at any point the slow pointer and the fast pointer meet, we conclude that there is a cycle in the linked list and return true. If either pointer reaches the end of the list (i.e., becomes NULL), we know there is no cycle and return false.

// Complexity
// Time complexity:
// O(n), where
// n is the number of nodes in the linked list. In the worst case, both pointers traverse the entire linked list

// Space complexity:
// O(1). We are using only a constant amount of extra space for the two pointers.

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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!= NULL && fast->next!=NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) return true;
        }
        return false;
    }
};