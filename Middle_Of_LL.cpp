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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* p = head;
//         int c = 0;
//         while(p!=NULL){
//             c++;
//             p = p ->next;
//         }
//         free(p);
//         int middle = c/2;
//         int i = 0;
//         ListNode* p1 = head;
//         while(i<middle){
//             p1 = p1->next;
//             i++;
//         }
        
//         return p1;
//     }
// };
class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            ListNode* slow = head;
            ListNode* fast = head;
            while(fast && fast -> next){
                slow = slow -> next;
                fast = fast -> next -> next;
            }
            return slow;
        
        }
};
