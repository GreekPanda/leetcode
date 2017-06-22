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
	public int lowestCommonAncestor(TreeNode root, TreeNode A, TreeNode B) {
		if(root == null || A  == null || B == null)
			return root;
		
		TreeNode left = lowestCommonAncestor(root.left, A, B);
		TreeNode right = lowestCommonAncestor(root.right, A, B);
		
		if(A == null && B == null)
			return root;
		
		return (left != null) ? left : right;
	}
	
}