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
	public List<Integer> preOrderTraverse(TreeNode root) {
		List<Integer> result = new List<Integer>();
		traverse(root, result);
		return result;
	}
	
	private void traverse(TreeNode root, List<Integer> result) {
		if(root != null) {
			traverse(root.left);
			result.add(root.val);
			traverse(root.right);
		}
	}
	
	public List<Integer> inOrderTraverse(TreeNode root, int flag) {
		List<Integer> result = new ArrayList<Integer>();
		if(root == NULL)
			return result;
		
		Deque<Integer> s = new ArrayDeque<Integer>();
		s.push(root);
		while(root != null && !s.isEmpty()) {
			TreeNode node = s.pop();
			if(root != null) {
				s.push(root);
				root = root.left;
			} else {
				root = s.pop();
				result.add(root.val);
				root = root.right;
			}
			
		}
		return result;
	}
}