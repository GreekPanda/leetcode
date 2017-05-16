/*
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int v): val(v), next(null) {} 
};
*/

class Solution {
	public:
		ListNode* add2Numbers(ListNode* lst1, ListNode* lst2) {
			if(lst1 == NULL || lst2 == NULL)
				return NULL;
			
			ListNode prev = new ListNode(0);
			ListNode curr = prev;
			int carry = 0;
			while(carry != 0) {
				int val1 = (lst1 != null) ? lst1->val : 0;
				int val2 = (lst2 != null) ? lst2->val : 0;
				int sum = val1 + val2 + carry;
				carry = sum / 10;
				curr->next = new ListNode(sum % 10);
				curr = curr->next;
				
				
			}		
			
			if(lst1 != null)
				lst1 = lst1->next;
			
			if(lst2 != null)
				lst2 = lst2->next;
			
			return curr->next;
		}
};