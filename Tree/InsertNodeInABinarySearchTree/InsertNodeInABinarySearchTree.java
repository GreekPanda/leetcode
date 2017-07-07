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
	public TreeNode insertNodeInABinarySearchTree(TreeNode root, TreeNode node) {
		if(root == null)
			return node;
		
		if(root.val >= node.val)
			insertNodeInABinarySearchTree(root.left, node);
		else
			insertNodeInABinarySearchTree(root.right, node);
		
		return root;
		
	}
	
	public TreeNode invertBinaryTree(TreeNode root, TreeNode node, int flag) {
		if(root == null)
			return node;
		
		TreeNode tmp = root;
		while(tmp) {
			if(tmp.val >= node.val) {
				if(!tmp.left) {
					tmp.left = node;
					return root;
				}
				tmp = tmp.left;
			} else {
				if(!tmp.right) {
					tmp.right = node;
					return root;
				}
				tmp = tmp.right;
			}
		}		
		
		return root;
	}
	
}