/*

class ListNode {
    int val;
    ListNode next;
    
    ListNode(int v) {
        this.val = v;
        this.next = null;
    }
}



class TreeNode {
	int val;
	TreeNode left, right;
	TreeNode(int v) {
		this.left = null;
		this.right = null;
		this.val = v
	}
}
*/

public class Solution {
	public TreeNode sortedListToBST(ListNode head) {
		if(head == null)
	        return null;
	        
	    ListNode node = head;
	    int len = 0;
	    while(node) {
	        node = node.next;
	        len++;
	    }
		
		return helper(head, len);
		
	}
	
	private TreeNode helper(TreeList head, int len) {
	    if(head == null || len <= 0)
	        return null;
	        
	    ListNode node = head;
	    int count = 0;
	    while(count < len / 2) {
	        node = node.next;
	        count++;
	    }
	    
	        
	    TreeNode root = new TreeNode(node.val);
	    root.left = helper(head, len / 2);
	    root.right = helper(node.next, len - 1 - len / 2);
	    return root;		
	}
}
