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
//     ListNode* oddEvenList(ListNode* head) {
//         vector <int> temp;
//         ListNode* curr = head;
//         while(curr){
//             temp.push_back(curr -> val);
//             curr = curr->next;
//         }
//         ListNode* dummy = new ListNode(-1);
//         ListNode* curr1 = dummy;
//         for(int i=0;i<temp.size();i+=2){
//             curr1 -> next = new ListNode(temp[i]);
//             curr1 = curr1 -> next;
//         }
//         for(int i=1;i<temp.size();i+=2){
//             curr1 -> next = new ListNode(temp[i]);
//             curr1 = curr1 -> next;
//         }
//         return dummy -> next;
//     }
// };
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         vector <int> temp;
//         ListNode* curr = head;
//         while(curr){
//             temp.push_back(curr -> val);
//             curr = curr->next;
//         }
//         ListNode* curr1 = head;
//         for(int i=0;i<temp.size();i+=2){
//             curr1 -> val = temp[i];
//             curr1 = curr1 -> next;
//         }
//         for(int i=1;i<temp.size();i+=2){
//             curr1 -> val = temp[i];
//             curr1 = curr1 -> next;
//         }
//         return head;
//     }
// };
// the above solution is taking O(n) space , we will reorder in the same LL in below solution
class Solution{
public:
    ListNode* oddEvenList(ListNode* head){
        if (!head || !head->next) return head; 
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }
};
