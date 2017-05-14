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
			if(head == NULL  || head->next == NULL)
				return NULL;
			
            ListNode *dummy;
			dummy->next = head;
			ListNode *curr = dummy;
		
            while(curr != NULL) {
                while (!curr->next && !curr->next->next) {
                   if(curr->next.val == curr->next->next.val) {
					   int val = curr->next.val;
					   if(curr->next.val != NULL && val == curr->next->next.val) {
							ListNode *tmp = curr->next;
							curr->next = curr->next->next;
							delete tmp;
					   }
				   } else 
					   curr->next = curr->next->next;

                }
                curr = curr->next;
            }
            return dummy->next;
        }
};

