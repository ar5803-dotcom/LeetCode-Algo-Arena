// # Intuition
// The problem involves deleting the middle node of a linked list. To accomplish this, we need to find the middle node and update the pointers accordingly.

// # Approach
// The approach involves calculating the length of the linked list, determining the middle index, and then traversing the list again to the node before the middle. Finally, we update the next pointer to skip the middle node and effectively delete it.

// # Complexity
// - Time complexity:
// O(n), where 

// n is the number of nodes in the linked list. The algorithm traverses the list twice.

// - Space complexity:
// O(1)

// # Code

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* p = head;
        int c = 0;

    
        while (p != NULL) {
            c++;
            p = p->next;
        }

        free(p);

        int middle = c / 2;
        int i = 0;
        ListNode* p1 = head;

        while (i < middle - 1) {  
            p1 = p1->next;
            i++;
        }
        // if (p1 != NULL && p1->next != NULL) {
        //     p1->next = p1->next->next;
        // }
        p1->next = p1->next->next;

        return head;
    }
};