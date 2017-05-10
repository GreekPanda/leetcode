class Solution {
	public int singleNumber(int[] nums) {
		if(nums == null || nums.length == 0)
			return -1;
		
		int result = 0;
		int i = 0;
		
		for(; i < num.length; ++i) {
			result = result ^ nums[i];
		}
		
		return result;
	}
}