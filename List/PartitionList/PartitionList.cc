/*
 struct ListNode {
	int val;
	ListNode *next;
	ListNode(int val):val(val), next(null) {}
 };
*/
class Solution {
	public:
		ListNode* partitionList(ListNode* head, int k) {
			if(head == NULL)
				return NULL;
			
			ListNode* leftDummy = new ListNode(0);
			ListNode* left = leftDummy;
			listNode* rightDummy = new ListNode(0);
			ListNode* right = rightDummy;
			ListNode* node = head;
			
			while(node->next) {
				if(node->val < k) {
					left->next = node;
					left = left->next;
				} else {
					right->next = node;
					right = right->next;
				}
				node = node->next;
			}
			right->next = null;
			left->next = rightDummy->next;
			
			return leftDummy->next;
			
		}
};