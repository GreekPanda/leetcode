class PartitionEvenAndOdd {
	public void partitionArrayByEvenAndOdd(vector<int> nums) {
		if(nums == null || nums.size() <= 0)
			return;
		
		int left = 0, right = nums.size - 1;
		while(left < right) {
			
			//odd
			while(left < right && nums[left] % 2 != 0) {
				left++;
			}
			
			//even
			while(left <right && nums[right] % 2 == 0) {
				right--;
			}
			
			if(left != right) {
				swap(nums[left], nums[right]);
			}
		}
	}
}