class Solution {
	public:
		int findMin(vector<int> &nums) {
			if(nums.empty()) {
				return -1;
			}
			
			int start = 0;
			int end = nums.size() - 1;
			int mid = 0;
			
			while(start +  1 < end) {
				mid = start + (end - start) / 2;
				if(nums[mid] < nums[end]) 
					end = mid;
				else 
					start = mid;
			}
			
			if(nums[start] < nums[end])
				return nums[start];
			else
				return nums[end];
		}
};