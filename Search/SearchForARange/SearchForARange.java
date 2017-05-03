public class Solution {
	public searchForARange(int[] nums, int target) {
		int ret = int[] {-1, -1};
		if (nums == null || nums.length == 0)
			return ret;
		int start = -1, end = nums.length;
		
		while(start + 1 < end) {
			int mid = start + (end - start) / 2;
			if(nums[mid] < target) {
				start = mid
			} else {
				end = mid;
			}
		}
		
		if((start + 1 < nums.length) && (nums[start + 1] ==  target)) {
			ret[0] = start + 1;			
		} else {
			ret[0] = -1;
			ret[1] = -1;
			return ret;
		}
		
		end = nums.length - 1;
		while(start + 1 < end) {
			int mid = start + (end -  start) / 2;
			if(nums[mid] > target) {
				end = mid;
			} else {
				start = mid;
			}
		}
		ret[1] = end - 1;
		
		return ret;
	}
}