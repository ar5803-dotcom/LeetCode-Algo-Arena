/**
 * Definition for singly-linked list.
 */
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
    
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
            int a = curr->val;
            int b = curr->next->val;
            int g = gcd(a, b);

            ListNode* newNode = new ListNode(g);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = curr->next->next;
        }
        return head;
    }
};