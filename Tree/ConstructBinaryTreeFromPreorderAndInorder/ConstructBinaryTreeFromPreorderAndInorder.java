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
	public TreeNode contructTree(int[] preorder, int[] inorder) {
		if(preorder == null || inorder == null)
			return null;
		
		if(preorder.length == 0 || inorder.length == 0)
			return null;
		
		if(preorder.length != inorder.length)
			return null;
		
		TreeNode root = helper(preorder, 0, preorder.length - 1, inorder, 0, inorder.length - 1);
		return root;
		
	}
	
	private TreeNode helper(int[] preorder, int prestart, int preend, int[] inorder, int instart, int inend) {
		if(preorder == null || inorder == null || prestart > preend || instart > inend)
			return null;
		
		int val = preorder[prestart];
		TreeNode root = new TreeNode(val);
		int index = findIndex(inorder, instart, inend, val);
		
		root.left = helper(preorder, prestart + 1, prestart + index - instart, inorder, index + 1, inend);
		root.right = helper(preorder, prestart + index - instart + 1, preend, inorder, index + 1, inend);
		return root;
	}
	
	private int findIndex(int[] nums, int start, int end, int target) {
		for(int i = start; i < end; ++i) {
			if(nums[i] ==  target)
				return i;
		}
		return -1;
	}
}