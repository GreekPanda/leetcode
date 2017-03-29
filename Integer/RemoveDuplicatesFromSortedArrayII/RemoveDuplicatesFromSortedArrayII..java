class RemoveDuplicateFromSortedArrayII{
	public int removeDuplicateFromSortedArrayII(int[] nums) {
		int len = nums.length;
		if(len <= 0)
			return len;
		
		int index = 1;
		for(i = 2; i < len; ++i) {
			if(nums[i] != nums[index] || nums[i] != nums[index - 1]) {
				index++;
				nums[index] = nums[i]; 
			}
		}
		
		return (index + 1);
	}
}