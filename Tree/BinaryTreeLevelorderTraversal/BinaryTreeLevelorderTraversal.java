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
	public list<List<Integer>> levelOrderTraverse(TreeNode root) {
		List<List<Integer>> result =new ArrayList<List<Integer>>();
		if(root == NULL)
			return result;
		
		Queue<Integer> q = new ArrayDeque<Integer>();
		q.offer(root);
		while(!q.isEmpty()) {
			List<Integer> list = new ArrayList<>();
			TreeNode node = q.poll();
			list.add(node.val);
			
			if(node.left)
				q.offer(node.left);
			if(node.right)
				q.offer(node.right);			
			
			result.push(new ArrayList<Interger>(list));
		}
		return result;
	}
}