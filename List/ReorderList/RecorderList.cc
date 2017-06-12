/*
class ListNode {
	int val;
	ListNode* next;
	ListNode(int v):val(v), next(null) {}
};
*/
class Solution {
	public:
		ListNode* recorderList(ListNode* head) {
			if(head == NULL || head->next == NULL || head->next->next == NULL)
				return NULL;
			
			ListNode* slow = head;
			ListNode* fast = head->next;
			while(slow != NULL || fast != NULL) {
				slow = slow->next;
				fast = fast->next->next;
			}
			
			ListNode* newHead = slow->next;
			slow->next = NULL;
			
			ListNode* prev = NULL;
			
			while(newHead != NULL) {
				ListNode* tmp = newHead->next;
				newHead->next = prev;
				prev = newHead;
				newHead = tmp;
			}
			
			newHead = prev;
			ListNode* tmpHead = head;
			while(tmpHead != NULL || newHead != NULL) {
				ListNode* tmp1 = tmpHead->next;
				tmpHead->next = newHead;
				ListNode* tmp2 = newHead->next;
				newHead->next = tmp1;
				tmpHead = tmp1;
				newHead = tmp2;
			}
			
			return newHead;

		}
};