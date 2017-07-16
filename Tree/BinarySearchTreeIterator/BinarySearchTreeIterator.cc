/*
class TreeNode {
	int val;
	TreeNode left, right;
	TreeNode(int v) {
		this.left = NULL;
		this.right = NULL;
		this.val = v
	}
}
*/
class BSTIterator {
    private:
        Stack<TreeNode*> stack;
        TreeNode *curr = NULL;
    
    public:
        BSTIterator(TreeNode *root) {
            curr = root;
        } 
        
        bool hasNext() {
            return (curr && !stack.empty());
        }   
        
        TreeNode *next() {
            while(curr) {
                stack.push(curr);
                curr = curr->left
            }
            
            curr = stack.top();
            stack.pop();
            TreeNode* node = curr;
            curr = curr->right;
            
            return node;
            
        }
};
