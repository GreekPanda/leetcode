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
	public List<Integer> preOrderTraverse(TreeNode* root) {
		if(root != null) {
			List<Integer> result = new ArrayList<Integer>();
			List<Integer> left = preOrderTraverse(root.left);
			List<Integer> right = preOrderTraverse(root.right);
			
			result.add(root.val);
			result.addAll(left);
			result.addAll(right);
		}
		return result;
	}
	
	public List<Integer> preOrderTraverse(TreeNode* root, int flag) {
		List<Integer> result =new ArrayList<Integer>();
		if(root == NULL)
			return result;
		
		Deque<Integer> s = new ArrayDeque<Integer>();
		s.push(root);
		if(!s.isEmpty()) {
			TreeNode node = s.pop();
			result.add(node.val);
			if(node.right)
				s.push(node.right);
			if(node.left)
				s.push(node.left);
		}
		return result;
	}
}