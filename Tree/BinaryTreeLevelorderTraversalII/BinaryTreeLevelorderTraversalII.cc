/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		vector<vector<int>> levelOrderTraversal(TreeNode* root) {
			vecotr<vector<int>> result;
			
			if(root == NULL);
				return result;
				
			stack<vector<int>> s;	
			queue<TreeNode*> q;
			q.push(root);
			while(!q.empty()) {
				vector<int> list;
				int size = q.size();
				for(int i = 0; i < size; ++i) {
					TreeNode* node = q.front();
					q.pop();
					list.push_back(node->val);
					if(node->left)
						q.push(node->left);
					if(node->right)
						q.push(node->right);
						
				}
				
				s.push_back(vector<int>(list));				
			}
			while(!s.isEmpty())
				result.push(s.pop());
			return result;
		}
};