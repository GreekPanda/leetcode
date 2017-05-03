class Solution {
	public:
		vector<int> searchForARange(vector<int> &nums, int target) {
			vector<int> ret = {-1, -1};
			if(nums == null || nums.size() < = 0)
				return ret;
			
			int start = -1, end = nums.size();
			while(start + 1 < end) {
				int mid = (start + end) / 2;
				if(nums[mid] ==  target)
					start = mid;
				else
					end = mid;
				
			}
			
			if((end < nums.size()) && nums[end] == target)
				ret[0] = end;
			else
				return ret;
			
			end = nums.size();
			while(start + 1 < end) {
				int mid = start + (end - start) / 2;
				if(nums[mid] > target)
					end = mid;
				else
					start = mid;
				
			}
			result[1] = end - 1;
			
			
			return ret;
 		}
};