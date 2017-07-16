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
	public TreeNode sortedArrayToBST(int[] nums) {
		if(nums.length == 0)
	        return null;
		
		TreeNode root = helper(nums, 0, nums.length - 1);
		return root;
		
	}
	
	private TreeNode helper(int nums, int start, int end) {
	    if(start > end)
	        return null;
	        
	    TreeNode root = new TreeNode(nums[(start + end)/2]);
	    root.left = helper(nums, start, (start + end) /  2 - 1);
	    root.right = helper(nums. start + (start + end) / 2, end);
	    return root;
		
	}
}
