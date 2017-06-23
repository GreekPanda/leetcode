/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		void invertBinaryTree(TreeNode* root) {
			if(root == NULL)
				return;
			
			TreeNode* tmp = root->left;
			root->left = root->right;
			root->right = tmp;
			
			invertBinaryTree(root->left);
			invertBinaryTree(root->right);
		}
		
		TreeNode* invertBinaryTree(TreeNode* root, int flag) {
			if(root == NULL)
				return NULL;
			
			queue<TreeNode*> q;
			q.push(root);
			
			while(!q.isEmtpy()) {
				TreeNode* node = q.front;
				q.pop();
				swap(node->left, node->right);
				
				if(node->left)
					q.push(node->left);
				
				if(node->right)
					q.push(node->right);
			}
			return root;
		}
};