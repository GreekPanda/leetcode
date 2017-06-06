/*
class ListNode {
	int val;
	ListNode* next;
	
	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}
};
*/

class Solution {
	public:
		ListNode* reverse(ListNode* head) {
			if(head == NULL || head->next == NULL)
				return NULL;
			
			ListNode prev = NULL;
			ListNode curr = head;
			
			while(curr != NULL) {
				ListNode *temp = curr->next;
				curr->next = prev;
				prev = curr;
				curr = temp;
			}
			head = prev;
			return head;
		}
		
		ListNode* reverse1(ListNode* head) {
			if(head == NULL || head->next == NULL)
				return NULL;
			
			ListNode* newHead = reverse1(head->next);
			head->next->next = head;
			head->next = NULL;
			
			return newHead;
		}
}