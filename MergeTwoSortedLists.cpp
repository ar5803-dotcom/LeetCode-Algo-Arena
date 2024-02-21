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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        vector<int> v;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        while (head1 || head2) { 
            if (head1) { 
                v.push_back(head1->val);
                head1 = head1->next;
            }
            if (head2) { 
                v.push_back(head2->val);
                head2 = head2->next;
            }
        }
        sort (v.begin(),v.end());
  
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        for (int val : v) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }
        
        return dummy->next;
    }
};

