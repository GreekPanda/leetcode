class Solution {
	public findMin(int[] nums) {
		if(nums == null || nums.length == 0)
			return -1;
		
		int start = 0;
		int end = nums.length - 1;
		int mid = 0;
		while(start + 1 < end) {
			mid = start + (end - start) / 2;
			if(nums[mid] < nums[end]) 
				end = mid;
			else if(nums[mid] > nums[end])
				start = mid;
			else
				--end;
		}
		
		return Math.min(nums[start], nums[end]);
	}
}