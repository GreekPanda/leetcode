class SearchInsertPosition {
	public int searchInsertPosition(ArrayList<int> nums, int k) {
		if(nums == null || nums.isEmpty)
			return -1;
		
		int start = 0;
		int end = nums.size - 1;
		
		while(start + 1 < end) {
			int mid = (start + end) / 2;
			if(nums[start] > k) {
				start = mid;
			} if(nums[end] > k) {
				end = mid;					
		}
		return end;
	}
}