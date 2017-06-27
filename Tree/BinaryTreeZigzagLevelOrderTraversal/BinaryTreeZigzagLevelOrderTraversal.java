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
	public ArrayList<ArrayList<Integer>> zigzagLevelOrder(TreeNode root) {
		if(root == null)
			return root;
		
		ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
		boolean odd = true;
		Queue<TreeNode> q = new Queue<TreeNode>();
		q.offer(root);
		while(!q.isEmtpty()) {
			TreeNode node = q.poll();
			q.add(node.val);
			if(node.left)
				q.offer(node.left);
			if(node.right)
				q.offer(node.right);

			if(odd)
				result.add(q);
			else {
				Collection.reverse(q);
				result.add(q);
			}
			
			odd = !odd;
		}
		
		return result;
	}
	
}