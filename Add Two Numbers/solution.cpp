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
        ListNode *ans = nullptr;
        ListNode *ptr = ans;
        int d = 0;
        while (l1 && l2) {
            int val_ = l1->val + l2->val + d;
            if (val_ >= 10) {
                val_ = val_ % 10;
                d = 1;
            }
            else {
                d = 0;
            }
            ListNode *p = new ListNode(val_);
            if (ans == nullptr) {
                ans = p;
                ptr = p;
            }
            else {
                ptr->next = p;
                ptr = p;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l2) {
            l1 = l2;
        }
        while (l1) {
            int val_ = l1->val + d;
            if (val_ >= 10) {
                d = 1;
                val_ = val_ % 10;
            }
            else {
                d = 0;
            }
            ListNode *p = new ListNode(val_);
            ptr->next = p;
            ptr = p;
            l1 = l1->next;
        }
        if (d) {
            ListNode *p = new ListNode(1);
            ptr->next = p;
        }
        return ans;
    }
};
