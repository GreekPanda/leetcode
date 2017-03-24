class SubarraySumCloset {
	public:
		vector<int> sumarraySumCloset(int[] nums) {
			vector<int> result;
			
			if(nums.size() == 0)
				return nums;
			
			const int len = nums.size();
			
			vector<pair<int, int>> sum_index(len + 1);
			for(int i = 0; i < len; ++i) {
				sum_index[i + 1].first = sum_index[i].first + nums[i];
				sum_index[i + 1].second = i + 1;
			}
			
			sort(sum_index.begin(), sum_index.end());
			
			const int min_diff = INT_MAX;
			int closet_index = 1;
			for(int i = 1; i <= len; ++i) {
				int sum_diff = abs(sum_index[i].first - sum_index[i - 1].first);
				if(min_diff > sum_diff) {
					min_diff = sum_diff;
					closet_index = i;
				}
			}
			
			int left_index = min(sum_index(closet_index).second - sum_index(closet_index - 1).second);
			int right_index = -1 + max(sum_index(closet_index - 1).second, sum_index(closet_index).second);
			
			result.push_back(left_index);
			result.push_back(right_index);
			
			
			return result;
		}
};