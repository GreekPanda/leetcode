class ProductExcludeItself{
	public:
		vector<int> productExcludeItself(vector<int> &nums) {
			const int len = nums.size();
			
			vector<long long> result(len, 1);
			if(nums == null || nums == 1)
				return result;
			
			vector<long long> left(len, 1);
			vector<long long> right(len, 1);
			
			for(int i = 1; i < len; ++i) {
				left[i] = left[i - 1] * nums[i - 1];
				right[len - i - 1] = nums[len - i] * right[len - i]; 
			}
			
			for(int i = 0; i < len; ++i) {
				result[i] = left[i] * right[i];
			}
			
			return result;
 		}
};