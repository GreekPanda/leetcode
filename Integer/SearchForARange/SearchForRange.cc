class SearchForRange {
	public:
		vector<int> searchForRange(vector<int> nums, target) {
			if(nums == null || nums.size() == 0)
				return null;
			
			int start = -1;
			int end = nums.size;
			vector<int> result = {-1, -1};
			
			while(start + 1 < end) {
				int mid = start + (end - start) / 2;
				if(nums[mid] < target)
					start = mid;
				else
					end = mid;				
			}
			
			if((end < nums.size) && nums[end] == target)
				result[0] = end;
			else
				return result;
			
			
			end = nums.size();
			while(start + 1 < end) {
				int mid = (start + end) / 2;
				if(nums[mid] > target)
					end = mid;
				else
					start = mid;
				
			}
			result[1] = end - 1;
			return result;
		}
};