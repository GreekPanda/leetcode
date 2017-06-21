/*
class TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
*/

class Solution {
	public:
		vector<int> maxPathSum(TreeNode* root) {
			if(root == NULL)
				return 0;
			return helper.second(root);
			
		}
		
		
	private:
		pair<int, int> helper(TreeNode* root) {
			if(root == NULL) {
				make_pair(0, INT_MIN);
			}
			
			pair<int, int> left = root->left;
			pair<int, int> right = root->right;
			
			int sum = max(left.first, right.first) + root->val;
			sum = max(0, sum);
			
			int sub = max(left.second, right.second);
			int max = root->val + left.first + right.first;
			
			max = max(sub, max);
			
			return make_pair(sbu, max);
		}
};