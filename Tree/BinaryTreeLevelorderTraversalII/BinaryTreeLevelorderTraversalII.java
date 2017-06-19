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
	public list<List<Integer>> bottomLevelOrderTraverse(TreeNode root) {
		List<List<Integer>> result =new ArrayList<List<Integer>>();
		if(root == NULL)
			return result;
		
		stack<ArrayList<Integer>> s = new stack<ArrayList<Integer>>();
		
		Queue<TreeNode> q = new LinkedList<TreeNode>();
		q.offer(root);
		while(!q.isEmpty()) {
			int qLen = q.size();
			List<Integer> list = new ArrayList<>();
			
			for(int i = 0; i < qLen; ++i) {
				TreeNode node = q.poll();
				list.add(node.val);
				if(node.left)
					q.offer(node.left);
				if(node.right)
					q.offer(node.right);
			}
			
			s.push(new ArrayList<Interger>(list));
		}
		while(!s.isEmpty())
			result.add(s.pop());
		return result;
	}
}