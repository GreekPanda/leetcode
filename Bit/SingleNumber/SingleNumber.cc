class Solution {
	public:
		int singleNumber(vector<int> &nums) {
			if(nums.empty())
				return -1;
			
			int result = 0;
			
			for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++) {
				result = result ^ (*iter);
			}
			
			return result;
		}
};