/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		TreeNode* insertNodeInABinarySearchTree(TreeNode* root, TreeNode* node) {
			if(root == NULL)
				return node;
			
			if(root->val >= node->val)
				insertNodeInABinarySearchTree(root->left, node);
			else
				insertNodeInABinarySearchTree(root->right, node);
			return root;
		}
		
		TreeNode* invertBinaryTree(TreeNode* root, TreeNode* node, int flag) {
			if(root == NULL)
				return node;
			
			TreeNode* tmp = root;
			while(tmp != NULL) {
				if(tmp->val >= node->val) {
					if(!tmp->left) {
						tmp->left = node;
						return root;
					}
					tmp = tmp->left;
				} else {
					if(!tmp->right) {
						tmp->right = node;
						return root;
					}
					tmp = tmp->right;
				}
					
			}
			
			return root;
		}
};