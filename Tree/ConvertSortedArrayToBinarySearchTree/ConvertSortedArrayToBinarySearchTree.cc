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
	public TreeNode* sortedArrayToBST(vector<int> &nums) {
		if(nums.empty())
		    return NULL;
		return helper(nums, 0, nums.size() - 1);
		
	}
	
	private TreeNode* helper(vector<int> &nums, int start, int end) {
		if(start > end)
		    return NULL;
		    
		TreeNode *root = new TreeNode(nums[(start + end) / 2]);
		root->left = helper(nums, start, (start + end) /  2 - 1);
		root->right = helper(nums, start + (start + end) / 2 + 1, end);
		return root;
		
	}
}
