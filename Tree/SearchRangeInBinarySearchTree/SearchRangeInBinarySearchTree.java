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
	public	List<Integer> searchRange(TreeNode root, int start, int end) {
	
		if(root == null)
			return null;
		
		List<Integer> result = new ArrayList<Integer>();
	
		return helper(result, root, start, end);
	}
		
	//Inorder DFS	
	private List<Integer> helper(List<Integer> result, TreeNode root, int start, int end) {
		if(root == null)
			return null;
		
		helper(result, root.left, start, end);
		if((root.val >= start) && (root.val <= end) )
			result.add(root.val);
		
		helper(result, root.right, start, end);
		
		return result;
	}

}