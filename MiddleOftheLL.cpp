// Intuition
// The initial idea is to traverse the linked list twice: once to determine the length of the list and then to find the middle node. This approach aims to find the middle node by first calculating the total number of nodes in the linked list.

// Approach
// Initialize a pointer p and set it to the head of the linked list.
// Traverse the linked list with p to count the total number of nodes and find the length c.
// Free the pointer p since it reached the end of the linked list.
// Calculate the middle index by dividing the length c by 2.
// Initialize another pointer p1 and set it to the head of the linked list.
// Traverse the linked list with p1 until reaching the middle index.
// Return the pointer p1 as the middle node.

// Complexity
// Time complexity:
// O(n), where
// n is the number of nodes in the linked list.

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
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        int c = 0;
        while(p!=NULL){
            c++;
            p = p ->next;
        }
        free(p);
        int middle = c/2;
        int i = 0;
        ListNode* p1 = head;
        while(i<middle){
            p1 = p1->next;
            i++;
        }
        
        return p1;
    }
};