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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* curr = head;
        while(curr){
            v.push_back(curr->val);
            curr = curr -> next;
        }
        sort(v.begin(),v.end());
        ListNode* ans = new ListNode(-1);
        ListNode* dummy = ans;
        for(auto i:v){
            dummy -> next = new ListNode(i);
            dummy = dummy -> next;
        }
        return ans->next;
    }
};