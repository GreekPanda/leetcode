class Solution {
	public List<Integer> printNumber(int n) {
		if(n < 0)
			return null;
		
		List<Integer> result = new List<Integer>();
		helper(n, result);
		return result;
	}
	
	private void helper(int n, List<Integer> nums) {
		if(n == 0)
			return;
		
		helper(n - 1, nums );
		
		int base = Math.pow(10, n - 1);
		int size = nums.size();
		for(int i = 1; i < 10; ++i) {
			nums.add(i);
			for(int j = 1; j < size; ++j) {
				nums.add(nums.get(j) + base * i);
			}
		}
	}
}