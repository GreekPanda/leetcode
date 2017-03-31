class Median{
	public int median(int[] nums) {
		if(num == null || nums.length <= 0)
			return nums.length;
		
		return helper(nums, 0, nums.length - 1, (nums.length + 1) / 2);
	}
	
	private int helper(int[] nums, left, right, size) {
		if(left >= right)
			return nums[rigth];		
		
		int m = left;
		for(int i = 0; i < size; ++i) {
			if(nums[i] < nums[left]) {
				++m;
				int tmp = nums[m];
				nums[m] = nums[i];
				nums[i] = tmp;
			}
		}
		
		int tmp = nums[m];
		nums[m] = nums[left];
		nums[left] = tmp;
		
		if(m - left + 1 == size) {
			return nums[m];
		} else if(m - left + 1 > size) {
			return helper(nums, left, m - 1, size);
		} else {
			retrun helper(nums, left + 1, right, size - (m - l + 1));
		}
	}
}