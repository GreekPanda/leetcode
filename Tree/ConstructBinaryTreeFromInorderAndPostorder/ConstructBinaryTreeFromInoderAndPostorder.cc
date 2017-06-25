/*
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
	public TreeNode* contructTree(int[] inorder, int[] postorder) {
		if(postorder == NULL || inorder == NULL)
			return NULL;
		
		if(postorder.size() == 0 || inorder.size() == 0)
			return NULL;
		
		if(postorder.size() != inorder.size())
			return NULL;
		
		TreeNode* root = helper(inorder, 0, inorder.length - 1, postorder, 0, poster.length - 1);
		return root;
		
	}
	
	private TreeNode helper(int[] inorder, int instart, int inend, int[] postorder, int poststart, int postend) {
		if(postorder == NULL || inorder == NULL || poststart > postend || instart > inend)
			return NULL;
		
		int val = postorder[poststart];
		TreeNode* root = new TreeNode(val);
		int index = findIndex(inorder, instart, inend, val);
		
		root->left = helper(inorder, instart + 1, index - 1, postorder, poststart, poststart + index - instart - 1);
		root->right = helper(inorder, index + 1, inend, postorder, poststart + index - poststart, postend - 1);
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
