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
        ListNode *dummy = new ListNode(0);
        ListNode *ptr = dummy;
        int d = 0;
        while (l1 || l2 || d) {
            int val_ = 0;

            if (l1) {
                val_ += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                val_ += l2->val;
                l2 = l2->next;
            }
            if (d) {
                val_ += d;
                d = 0;
            }
            if (val_ >= 10) {
                val_ = val_ % 10;
                d = 1;
            }
            ListNode *p = new ListNode(val_);
            ptr->next = p;
            ptr = p;
        }
        return dummy->next;
    }
};
