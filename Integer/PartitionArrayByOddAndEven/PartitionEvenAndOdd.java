class PartitionEvenAndOdd {
	public void partitionArrayByEvenAndOdd(int[] nums) {
		if(nums == null || nums.length <= 0)
			return;
		
		int left = 0, right = nums.length - 1;
		while(left < right) {
			
			//odd
			while(left < right && nums[left] % 2 != 0) {
				left++;
			}
			
			//even
			while(left <right && nums[right] % 2 == 0) {
				right--;
			}
			
			if(left < right) {
				int tmp = nums[left];
				nums[left] = nums[right];
				nums[right] = tmp;
			}
		}
	}
}