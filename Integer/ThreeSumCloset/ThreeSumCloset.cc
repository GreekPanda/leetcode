class ThreeSumCloset {
	public:
		int threeSumCloset(vector<int> &nums, int target) {
			int result = 0;
			int len = nums.size();
			int tmp = 0;
			
			if(len < 3)
				return accumulate(nums.begin(), nums.end(), 0);
			
			sort(nums.begin(), nums.end());
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
};