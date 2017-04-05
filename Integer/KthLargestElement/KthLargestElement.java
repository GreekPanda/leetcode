class KthLargestElement {
	public int kthLargestElement(int[] nums, int k) {
		if(nums == null || num.isEmpty())
			return -1;
		
		int result = qSort(nums, 0, nums.length() - 1, k);
		return result;
	}
	
	private int qSort(ArrayList<Integer> nums, int start, int end, int k) {
		if(start > end)
			return nums[end];
		
		int m = start;
		
		for(int i = start; i < end; i++) {
			if(nums[i] > nums[start]) {
				m++;
				Collection.swap(nums, i, start);
			}
		}
		
		Collection.swap(nums, m, start);
		
		if(m + 1 == k) {
			return nums[m];
		} else if(m + 1 >k) {
			return qSort(nums, start, m - 1, k);
		} else {
			return qSort(nums, m + 1, end, k);
		}
	
	}
}