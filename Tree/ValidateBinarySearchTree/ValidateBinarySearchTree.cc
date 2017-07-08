/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		bool isValideBST(TreeNode* root) {
			if(root == NULL)
				return true;
			
			return helper(root, LLONG_MIN, LLONG_MAX);;
		}
		
	private:
		bool helper(TreeNode* root, long long lower, long long upper) {
			if(root == NULL)
				return true;
			
			if(root->val <= lower || root->val >= upper)
				return false;
			
			bool left = helper(root->left, lower, root->val);
			bool right = helper(root->right, root->val, upper);
			return (left & right)
		}
};