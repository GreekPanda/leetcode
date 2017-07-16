/*
class ListNode {
    int val;
    ListNode *next;
    
    ListNode(int v) {
        this.val = v;
        this.next = NULL;
    }
};


class TreeNode {
	int val;
	TreeNode left, right;
	TreeNode(int v) {
		this.left = NULL;
		this.right = NULL;
		this.val = v
	}
}
*/

public class Solution {
	public TreeNode* sortedListToBST(ListNode *head) {
		if(head == NULL)
		    return NULL;
		    
		ListNode *node = head;
		int len = 0;
		while(node) {
		    node = node->next;
		    len++;		    
		}
		return helper(head, len);
		
	}
	
	private TreeNode* helper(ListNode *head, int len) {
		if(head == NULL || len <= 0)
		    return NULL;
		    
		ListNode *node = head;
		int count = 0;
		while(count < len / 2) {
		    node = node->next;
		    count++;
		}
		    
		TreeNode *root = new TreeNode(node->val);
		root->left = helper(head, len / 2);
		root->right = helper(node->next, len - 1 - len / 2 );
		return root;		
	}
}
