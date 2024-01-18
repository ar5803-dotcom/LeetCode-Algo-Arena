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
    bool isPalindrome(ListNode* head) {
        string s = "";
        ListNode* h = head;
        while(h!=NULL){
            string s1 = to_string(h->val);
            s+=s1;
            h = h->next;
        }
        string copy = s;
        reverse(s.begin(),s.end());
        if (copy == s) return true;
        return false;
    }
};