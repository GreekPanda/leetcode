class Median {
	public:
		int median(vector<int> &nums) {
			if(nums.empty())
				return 0;
			
			int len = nums.size();
			return helper(nums, 0, len - 1, (len + 1) / 2);
		}
		
	private:
		int helper(vector<int> &nums, int left, int right, int size) {
			int m = left;
			for(int i = left + 1; i < right; ++i) {
				if(nums[i] < nums[left]) {
					++m;
					int tmp = nums[i];
					tmp[i] = nums[m];
					nums[m] = tmp;
				}
			}
			
			int tmp = nums[m];
			nums[m] = nums[left];
			nums[left] = tmp;
			
			if(m - left + 1 == size) {
				return nums[m]
			} else if(m - left + 1 > size) {
				return helper(nums, left, m - 1, size);
			} else {
				return helper(nums, m + 1, right, size - (m - left + 1));
			}
			
		}
};