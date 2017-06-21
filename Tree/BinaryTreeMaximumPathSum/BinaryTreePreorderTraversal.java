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
class Pair {
	int singlePath, maxPath;
	Pair(int _singlePath, int _maxPath) {
		this.singlePath = _singlePath;
		this.maxPath = _maxPath;
	}
}
public class Solution {
	public int maxSumPath(TreeNode root) {
		if(root == null)
			return 0;
		return helper(root).maxPath;
	}
	
	private Pair helper(TreeNode root) {
		if(root == null) {
			return Pair(0, INT_MIN);
		}
		
		Pair left = helper(root.left);
		Pair right = helper(root.right);
		
		int singlePath = Math.max(left.singlePath, right.singlePath) + root.val;
		singlePath = Math.max(0, singlePath);
		
		int maxPath = Math.max(left.maxPath, right.maxPath);
		maxPath = Math.max(maxPath, root.val + left.maxPath + right.maxPath);
		
		return new Pair(singlePath, maxPath);
		
	}
	
}