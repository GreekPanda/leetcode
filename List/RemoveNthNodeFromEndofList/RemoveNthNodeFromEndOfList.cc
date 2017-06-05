/*
class ListNode {
	int val;
	ListNode* next;
	ListNode(int val) {
		this->val = val;
		this->next = null;
	}
};
*/

class Solution {
	public:
		ListNode* rmNthNodeFromEndList(ListNode* head, int k) {
			if(head == NULL || k < 0)
				return NULL;
			
			ListNode* prev = head;
			ListNode* tail = head;
			
			int index = 0;
			while(index < k) {
				if(tail == NULL)
					return NULL;
				
				tail = tail -> next;
				++index;
			}
			
			if(tail == NULL)
				return head;
			
			while(tail->next) {
				tail = tail -> next;
				prev = prev -> next;
				
			}
			
			prev -> next = prev -> next -> next;
			
			return head;
		}
};