class Solution {
	public:
		int majorityNumber(vector<int> nums) {
			if(nums.empty())
				return -1;
			
			int key = -1, count = 0;
			for(auto num: nums) {
				if(count == 0) {
					key = num;
					count = 1;
					continue;
				}
				
				if(key == num) {
					count++;
				} else {
					count--;
				}
			}
			return key;
		}
};