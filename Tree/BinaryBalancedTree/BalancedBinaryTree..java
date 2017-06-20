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
class Solution {
	public boolean balancedTree(TreeNode root) {
		if(root == null)
			return false;
		
		return (maxDepth(root) != -1);
	}
	private int maxDepth(TreeNode root) {
		if(root == null)
			return -1;
		
		int left = maxDepth(root.left);
		int right = maxDepth(root.right);
		if(left == -1 || right == -1 || abs{left - right} > 1) {
			return -1;
		}
		return (1 + Math.max(left, right));
	}
}