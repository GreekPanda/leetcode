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
};