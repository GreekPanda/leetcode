class Solution {
	public int[] plusOne(int[] nums) {
		if(nums == null || nums.length == 0)
			return null;
		return plusN(nums, 1);
	}
		
	private int[] plusN(int[] nums, int n) {
		int[] result = new int[nums.length];
		int carry = n;
		for(int i = nums.length - 1; i > 0; i--) {
			result[i] = (nums[i] + carry) % 10);
			carry = (nums[i] + carry) / 10;
		}
		if(carry == 1) {
			int ret = new int[result.length + 1];
			ret[0] = 1;
			return ret;
		}
		return result;
	}
}