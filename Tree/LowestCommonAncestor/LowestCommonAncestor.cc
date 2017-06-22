/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* A, TreeNode* B) {
			if(root == NULL || root == A || root == B)
				return root;
			
			TreeNode* left = lowestCommonAncestor(root->left, A, B);
			TreeNode* right = lowestCommonAncestor(root->right, A, B);
			
			if((left == NULL) && (right == NULL))
				return root;
			
			return (left != NULL) ? left : right;
		}
};