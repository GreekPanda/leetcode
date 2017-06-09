/*
class ListNode {
	int val;
	ListNode* next;
	
	ListNode(int v):val(v), next(null) {}
};
*/

class Solution {
	public:
		ListNode* merger2Lists(ListNode* list1, ListNode* list2) {
			if(list1 == NULL && list2 == NULL)
				return NULL;
			
			ListNode* dummy = new ListNode(0);
			ListNode* lastNode = dummy;
			
			while(list1 != NULL && list2 != NULL) {
				if(list1->val < list2->val) {
					lastNode->next = list1;
					list1 = list1->next;
				} else {
					lastNode->next = list2;
					list2 = list2->next;
				}
				lastNode = lastNode->next;
			}
			lastNode->next = (NULL != list1) ? list1 : list2;
			return dummy->next;
		}		
}