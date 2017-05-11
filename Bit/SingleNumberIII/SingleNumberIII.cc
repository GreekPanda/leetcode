class Solution {
	public:
		vector<int> singleNumberIII(vector<int> &nums) {
			if(nums.empty())
				return -1;
			
			vector<int> result;
			
			for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter)
				result ^= (*iter);
			
			int lastBit = result - (result & (result - 1));
			int num1 = 0, num2 = 0;
			
			for(vector<int>::iterator iter =nums.begin(); iter != nums.end(); ++iter) {
				if((lastBit & (*iter)) == 0)
					num1 ^= (*iter);
				else
					num2 ^= (*iter);
			}
			
			result.push_back(num1);
			result.push_back(num2);
			
			return result;
		}
};