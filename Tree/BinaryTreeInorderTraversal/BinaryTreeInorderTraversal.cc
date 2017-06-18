/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		vector<int> inOrderTraversal(TreeNode* root) {
			vector<int> result;
			traverse(root, result);
			return  result;
		}
		
		
		vector<int> inOrderTraversal(TreeNode* root, int flag, int g) { 
			vector<int> result;
			if(root == NULL);
				return result;
			stack<TreeNode*> s;
			s.push(root);
			while(root != NULL && !s.empty()) {
				if(root != NULL) {
					s.push(root);
					root = root->left;
					
				} else {
					root = s.pop();
					result.push_back(root->val);
					root = root.right;
				}
			}
			return result;
		}
		
		
	private:
		void traverse(TreeNode* root, vector<int> &ret) {
			if(root != NULL) {
				traverse(root->left, ret);
				ret.push_back(root);
				traverse(root->right, ret);
			}
		}
};