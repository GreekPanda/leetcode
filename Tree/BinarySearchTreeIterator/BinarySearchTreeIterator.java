/*
class TreeNode {
	int val;
	TreeNode left, right;
	TreeNode(int v) {
		this.left = null;
		this.right = null;
		this.val = v
	}
}
*/

class BSTIterator {
    private Stack<TreeNode> stack = new Stack<TreeNode>();
    private TreeNode curr;
    
    public BSTIterator(TreeNode root) {
        this.curr = root;
    }
    
    public boolean hasNext() {
        return (curr != null || !stack.isEmpty());
    }
    
    public TreeNode next() {
        while(curr) {
            stack.push(curr);
            curr = curr.left;            
        }
        
        curr = stack.top();
        TreeNode node = curr;
        curr = curr.right;
        
        return node;
    }
}
