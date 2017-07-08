/*
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
	public boolean isValidBST(TreeNode root) {
		if(root == null)
			return true;
		
		return helper(root, Long.MIN_VALUE, Long.MAX_VALUE);
		
	}
	
	private boolean helper(TreeNode root, long lower, long upper) {
		if(root == null)
			return true;
		
		if(lower >= upper)
			return false;
		
		boolean left = helper(root.left, lower, root.val);
		boolean right = helper(root.right, root.val, upper);
		
		return (left & right);
	}
	
	public boolean isValidBST(TreeNode root, int flag) {
		if(root == null)
			return true;
		Deque<TreeNode> q = new ArrayDeque<TreeNode>();
		long MIN = Long.MIN_VALUE;
		while(root && !q.isEmtpy()) {
			if(root) {
				q.push(root);
				root = root.left;
			} else {
				root = q.pop();
				if(root.val > MIN) {
					MIN = root.val;
				} else {
					return false;
				}
				root = root.right;
			}
		}
		return true;
	}
	
}