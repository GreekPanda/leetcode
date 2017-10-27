/*
class ListNode {
	int val;
	ListNode* next;
	
	ListNode(int v):val(v), next(null) {}
};
*/

class Solution {
	public:
		bool LRUCache(ListNode* head) {
			if(head == NULL || head->next == NULL)
				return true;
			
			vector<int> stack = new vector<int>();
 			ListNode* slow = head;
			ListNode* fast = head;
			
			while(fast != NULL && fast->next != NULL) {
				stack.push_back(slow->val);
				slow = slow->next;
				fast = fast->next->next;
			}
			if(fast)
				slow = slow->next;
			
			ListNode* curr = slow;
			if(curr != NULL) {
				if(curr->val != stack.pop())
					return false;
				curr = curr->next;
			}
			return true;
		}

		bool palindromeLinkedList2(ListNode* head) {
			if(head == NULL || head->next == NULL)
				return true;
			
			vector<int> stack = new vector<int>();
 			ListNode* slow = head;
			ListNode* fast = head;
			
			while(fast != NULL && fast->next != NULL) {
				stack.push_back(slow->val);
				slow = slow->next;
				fast = fast->next->next;
			}
			if(fast)
				slow = slow->next;
			
			ListNode* rHead = reverse(slow);
			ListNode* lCurr = head, rCurr = rHead; 
			if(lCurr != NULL) {
				if(lCurr->val != rCurr->val) {
					reverse(rHead);
					return false;
				}
				lCurr = lCurr->next;
				rCurr = rCurr->next;
			}
			reverse(rHead);
			return true;
		}	

	private:
		ListNode* reverse(ListNode* head) {
			if(head == NULL)
				return NULL;
			
			ListNode* prev = NULL;
			while(head) {
				ListNode* after = head->next;
				head->next = prev;
				prev = head;
				head = after;				
			}
			return prev;
		}
};