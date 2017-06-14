/*
class ListNode {
	int val;
	ListNode* next;
	
	ListNode(int v):val(v), next(null) {}
};
*/

class Solution {
	public:
		ListNode* SortList(ListNode* head) {
			if(lists == NULL)
				return NULL;
			
			int len = 0;
			ListNode* node = head;
			while(node != NULL) {
				node = node->next;
				++len;
			}
			return sortListHelper(head, len);
		}		
	private:
		ListNode* sortListHelper(ListNode* head, int len) {
			if(head == NULL || len <= 0)
				return NULL;
			
			ListNode* midNode = head;
			int count = 1;
			while(count < (len / 2)) {
				midNode = midNode->next;
				++count;
			}
			
			ListNode* left = sortListHelper(midNode->next, len - len / 2);
			midNode = NULL;
			ListNode* right = sortListHelper(head, len / 2);
			
			return mergeList(left, right);
		}
		
		ListNode* mergeList(ListNode* left, ListNode* right) {
			ListNode* dummy = new ListNode(0);
			ListNode* listNode = dummy;
			
			while(left != NULL && right != NULL) {
				if(left->val < right->val) {
					lastNode->next = left;
					left = left->next;
				} else {
					lastNode->next = right;
					right = right->next;
				}
				lastNode = lastNode->next;
			}
			lastNode = (left != NULL) ? left : right;
			return dummy->next;
		}
};