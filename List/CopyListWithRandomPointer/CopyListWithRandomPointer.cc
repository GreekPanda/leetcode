/*
class RandomListNode {
	int val;
	ListNode *next, *randomPointer;
	ListNode(int v):val(v), next(NULL), randomPointer(NULL)  {}
};
*/
class Solution {
	public:
		RandomListNode* copyListWithRandomPointer(RandomListNode* head) {
			if(head == NULL)
				return NULL;
			
			RandomListNode* dummy = new RandomListNode(0);
			RandomListNode* curr = dummy;
			unordered_map<RandomListNode*, RandomListNode*> randomMap;
			while(head != NULL) {
				RandomListNode *newNode = new RandomListNode(head->val);
				curr->next = newNode;
				randomMap[head] = newNode;
				newNode->randomPointer = head->randomPointer;
				head = head->next;
				curr = curr->next;
			}

			curr = dummy->next;
			while(curr != NULL) {
				if(curr->randomPointer != NULL) {
					curr->randomPointer = randomMap[curr->random];					
				}
				curr = curr->next;
			}
			return dummy->next;
		}
};