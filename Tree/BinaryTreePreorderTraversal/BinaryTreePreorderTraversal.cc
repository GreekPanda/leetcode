/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		vector<int> preOrderTraversal(TreeNode* root) {
			vector<int> result;
			if(root != NULL) {
				vector<int> left = preOrderTraversal(root->left);
				vector<int> right = preOrderTraversal(root->right);
				result.push_back(root->val);
				result.insert(root->val, left.begin(), left.end());
				result.insert(root->val, right.begin(), right.end());
			}
			return  result;
		}
		
		vector<int> preOrderTraversal(TreeNode* root, int flag) { 
			vector<int> result;
			traverse(root, result);
			return result;
		}
		
		vector<int> preOrderTraversal(TreeNode* root, int flag, int g) { 
			vector<int> result;
			if(root == NULL);
				return result;
			stack<TreeNode*> s;
			s.push(root);
			while(!s.empty()) {
				TreeNode* node = s.pop();
				s.pop();
				result.push_back(node->val);
				if(node->right)
					s.push(node->right);
				if(node->left)
					s.push(node->left);
				
			}
			return result;
		}
		
		
	private:
		void traverse(TreeNode* root, vector<int> &ret) {
			if(root != NULL) {
				ret.push_back(root);
				traverse(root->left, ret);
				traverse(root->right, ret);
			}
		}
};