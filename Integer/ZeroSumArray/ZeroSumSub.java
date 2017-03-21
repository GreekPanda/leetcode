class ZeroSumSub {
	public: 
	vector<int> zeroSumSub(vector<int> nums) {
		vector<int> result;
		
		int curr_num = 0;
		vector<int> sum;
		for(int i = 0; i < nums.size(); ++i) {
			curr_num += nums[i];
			
			if( 0 == curr_num) {
				result.push_back(0);
				result.push_back(i);
				return result;
			}
			
			vector<int> iterator::iter = find(sum.begin(); sum.end(); curr_num);
			if(iter != sum.end()) {
				result.push_back(iter - sum.begin() + 1);
				result.push_back(i);
				return result;
			}
			sum.push_back(curr_num);
		}
		
		
		return result;
		
	}
};