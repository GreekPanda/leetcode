class KthLargestElement {
	public:
		int kthLargestElement(vector<int> nums, int k) {
			if(nums == null || num.size() == 0)
				return -1;
			
			int result = qSort(nums, 0, nums.size() - 1, k);
			return result;
		}
	
	private:
		int qSort(vector<int> nums, int start, int end, int k) {
			if(start > end)
				return nums[end];
			
			int m = start;
			
			for(int i = start; i < end; i++) {
				if(nums[i] > nums[start]) {
					m++;
					swap(nums, i, start);
				}
			}
			
			swap(nums, m, start);
			
			if(m + 1 == k) {
				return nums[m];
			} else if(m + 1 >k) {
				return qSort(nums, start, m - 1, k);
			} else {
				return qSort(nums, m + 1, end, k);
			}
		
		}
}