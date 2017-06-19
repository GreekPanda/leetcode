/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		int maxDepth(TreeNode* root) {
			vector<int> result;
			if(root != NULL) {
				int left = maxDepth(root->left);
				int right = maxDepth(root->right);
				return max(left, right) + 1;
			} else
			    return 0;
		}
		
		
		int maxDepth(TreeNode* root, int flag) { 
			vector<int> result;
			if(root == NULL);
				return result;
				
			queue<TreeNode*> s;
			s.push(root);
			int max = 0;
			while(!s.empty()) {
				int size = s.size();
				for(int i = 0; i < size; ++i) {
					TreeNode* node = s.front();
					s.pop();
					if(node->left != NULL)
						s.push(node->left);
					if(node->right != NULL)
						s.push(node->right);
				}	
				max++;
			}
			return max;
		}

};