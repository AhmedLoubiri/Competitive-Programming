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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l = new ListNode();
        ListNode* head = l;
        int carry = 0;
        int sum = 0, digit;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int v1 = (l1 != nullptr) ? l1->val : 0;
            int v2 = (l2 != nullptr) ? l2->val : 0;
            sum = v1 + v2 + carry;
            digit = sum % 10;
            l->val = digit;
            carry = sum / 10;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
            if (l1 != nullptr || l2 != nullptr || carry != 0) {
                l->next = new ListNode();
                l = l->next;
            }
        }

        return head;
    }
};