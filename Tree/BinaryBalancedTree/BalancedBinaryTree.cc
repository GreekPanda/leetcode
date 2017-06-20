/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		bool isBalancedTree(TreeNode* root) {
			if(root == NULL)
				return false;
			bool result = true;
			maxDepth(root, result);
			return result;
		}
		
	private:
		int maxDepth(TreeNode* root, bool &ret) {
			if(root == NULL)
				return -1; 
			
			int left = maxDepth(root->left, ret);
			int right = maxDepth(root->right, ret);
			if(abs(left - right) > 1) {
				ret = false;
				return INT_MAX;
			}
			return max(left, right) + 1;
				
		}
};