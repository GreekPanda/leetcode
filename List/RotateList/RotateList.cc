/*
class ListNode {
	int val;
	ListNode* next;
	ListNode(int v):val(v), next(null) {}
};
*/
class Solution {
	public:
		ListNode* rotateList(ListNode* head, int k) {
			if(head == NULL)
				return NULL;
			
			ListNode* slow = head;
			ListNode* fast = head;
			int len = 1;
			for(; fast != NULL && len <= k; ++len) {
				fast = fast->next;
			}
			
			if(len <= k) {
				len %= k;
				fast = head;
				for(int i = 0; i < k; ++i) {
					fast = fast->next;
				}
			}
			fast->next = head;
			head = slow->next;
			slow->next = null;			
			return head;
		}
};