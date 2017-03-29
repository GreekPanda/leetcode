class ThreeSumCloset {
	public int threeSumCloset(int[] nums, int target) {
		int len = nums.length();
		int result = 0;
		
		if(len < 3)
			return result;
		
		Array.sort(nums);
		int tmp = 0;
		
		for(int i = 0; i < len - 2; ++i) {
			int j = i + 1, k = len - 1;
			while(j < k) {
				tmp = nums[i] + nums[j] + nums[k];
				if(abs(tmp - target) < abs(result - target))
					result = tmp;
				if(result == target)
					return result;
				(tmp > target) ? --k: ++j;
			}
		}
		return result;
	}
}