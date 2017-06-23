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

public class Solution {
	public void invertBinaryTree(TreeNode root) {
		if(root == null)
			return;
		
		TreeNode tmp = root.left;
		root.left = root.right;
		root.right = tmp;
		
		invertBinaryTree(root.left);
		invertBinaryTree(root.right);
		
	}
	
	public TreeNode invertBinaryTree(TreeNode root, int flag) {
		if(root == null)
			return null;
		
		Deque<TreeNode> q;
		q.push(root);
		
		while(!q.isEmpty()) {
			TreeNode node = q.front();
			q.pop();
			swap(node.left, node.right);
			if(node.left)
				q.push(node.left);
			
			if(node.right)
				q.push(ndoe.rigth);		
			
		}
		return root;
	}
	
}