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
int binaryToDecimal(const std::string& binaryString) {
    std::bitset<64> bits(binaryString); 

    int decimalValue = static_cast<int>(bits.to_ulong());
    
    return decimalValue;
}
public:
    int getDecimalValue(ListNode* head) {
        string s = "";
        ListNode* h = head;
        while(h!=NULL){
            string s1 = to_string(h->val);
            s+=s1;
            h = h->next;
        }
        return binaryToDecimal(s);
    }
};