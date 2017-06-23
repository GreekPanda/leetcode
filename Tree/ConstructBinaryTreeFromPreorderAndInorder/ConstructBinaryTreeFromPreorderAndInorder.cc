/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		TreeNode *contructTree(int[] preorder, int[] inorder) {
			if(preorder == NULL || inorder == NULL)
				return NULL;
			
			if(preorder.size() == 0 || inorder.size() == 0)
				return NULL;
			
			if(preorder.size() != inorder.size())
				return NULL;
			
			TreeNode *root = helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
			return root;
			
		}
	
	private:
		TreeNode helper(int[] preorder, int prestart, int preend, int[] inorder, int instart, int inend) {
			if(preorder == NULL || inorder == NULL || prestart > preend || instart > inend)
				return NULL;
			
			int val = preorder[prestart];
			TreeNode *root = new TreeNode(val);
			int index = findIndex(inorder, instart, inend, val);
			
			root->left = helper(preorder, prestart + 1, prestart + index - instart, inorder, index + 1, inend);
			root->right = helper(preorder, prestart + index - instart + 1, preend, inorder, index + 1, inend);
			return root;
		}
		
		int findIndex(int[] nums, int start, int end, int target) {
			for(int i = start; i < end; ++i) {
				if(nums[i] ==  target)
					return i;
			}
			return -1;
		}
};