class ThreeSum {
	public:
		vector<vector<int>> threeSum(vector<int> &nums) {
			vector<vector<int>> result;
			int tmp = 0
			
			len = nums.size();
			if(len < 3)
				return result;
			
			sort(nums.begin(), nums.end());
			for(int i = 0; i < len - 2; ++i) {
				if(i > 0 && nums[i] == nums[i -1])
					continue;
				
				int left = i + 1;
				int right = len - 1;
				
				while(left < right) {
					 tmp = nums[left] + nums[right] + nums[i];
					if(tmp == 0) {
						result.push_back((nums[i], nums[left], nums[right]));
						left++;
						while(left < right && nums[left] == nums[left - 1])
							left++;
					} else if(tmp + nums[i] < 0)
						left++;
					else
						right--;
						
				}
			}
			return result;
		}
};