/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		vector<int> searchRange(TreeNode* root, int start, int end) {
		
			if(root == NULL)
				return NULL;
			
			vector<int> result;
		
			return helper(result, root, start, end);
		}
		
		
	private:
		//Inorder DFS
		vector<int> helper(vector<int> &result, TreeNode* root, int start, int end) {
			if(root == NULL)
				return NULL;
			
			helper(result, root->left, start, end);
			if((root->val >= start) && (root->val <= end) )
				result.push_back(root->val);
			helper(result, root->right, start, end);
			
			return result;
		}
};