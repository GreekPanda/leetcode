/*
class ListNode {
	int val;
	ListNode* next;
	
	ListNode(int v):val(v), next(null) {}
};
*/

class Solution {
	public:
		ListNode* merger2Lists(vector<ListNode*> &lists) {
			if(list == NULL)
				return NULL;
			
			ListNode* dummy = new ListNode(INT_MAX);
			ListNode* lastNode = dummy;
			
			while(true) {
				int count = 0;
				int index = -1, tmp = INT_MAX;
				
				for(int i = 0; i < lists.size(); ++i) {
					if(lists[i] == NULL) {
						++count;
						if(count == lists.size()) {
							lists->next = NULL;
							return dummy->next;
						}
						continue;
					}
				}
			}
			for(list[i] != NULL && lists[i]->val < tmp) {
				tmp = lists[i]->val;
				index = i;
			}
			
			lastNode->next = lists[index];
			last = last->next;
			lists[index] = lists[index]->next;
			
		}		
};