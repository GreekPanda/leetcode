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
class Solution {
	public int maxDepth(TreeNode root) {
		if(root != null) {
			int left = maxDepth(root.left);
			int right = maxDepth(root.right);
			return max(left, right) + 1;
		} else
			return 0;
	}
	
	public int maxDepth(TreeNode root, int flag) {
		if(root == null)
			return 0;
		
		int max = 0;
		Queue<Integer> q = new LinkList<Integer>();
		q.offer(root);
		while(!q.isEmpty()) {
			max++;
			int qLen = q.size();
			for(int i = 0; i < qLen; i++) {
				TreeNode node = q.poll();
				if(node.left)
					q.offer(node.left);
				if(node.right)
					q.offer(node.right);
			}
		}
		return max;
	}
}