/*
class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int val) {
            this.val = val;
            this.next = NULL;
        }
};
*/
class Solution {
    public:
        LsitNode* rmDup(ListNode *head) {
            ListNode *curr = head;
            while(curr != NULL) {
                while (!curr->next && curr->next.val == curr->val) {
                    ListNode *tmp = curr->next;
                    curr->next = curr->next->next;
                    delete(tmp);
                    tmp = NULL;

                }
                curr = curr->next;
            }
            return head;
        }
};

