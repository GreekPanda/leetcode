class TwoSum {
	public:
		vector<int> twoSum(vector<int> &nums, int target) {
			vector<int> result;
			const int len = nums.size();
			
			if(nums == null || len == 0)
				return result;
			
			unordered_map<int, int>  hash(len);
			for(int i = 0; i < len; ++i) {
				if(hash.find(target - nums[i]) != hash.end()) {
					result.push_back(hash(target - nums[i]);
					result.push_back(i + 1);
					return result;
				} else {
					hash[nums[i]] = i + 1;
				}
			}
			
			return result;
		}
		
		vector<int> twoSum(vector<int> &nums, int target, int flag) {
			vector<int> result;
			const int len = nums.size();
			
			if(nums == null || len == 0)
				return result;
			
			vector pair<int, int> num_index(len);
			
			for(int i = 0; i < len; ++i) {
				num_index.first(nums[i]);
				num_index.second(i);				
			}
			
			sort(num_index.begin(), num_index.end());
			int start = 0, end = len - 1;
			
			while(start < end) {
				if(num_index[start].first + num_index[end].first > target) {
					--end;
				} else if((num_index[start].first + num_index[end].first == target) {
					int min_index = min(nums[start].second, nums[end].second);
					int max_index = max(nums[start].second, nums[end].second);
					result.push_back(min_index);
					result.push_back(max_index);
					return result;
				} else
					start++;
			}
			
			return result;
		}
};