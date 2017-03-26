class FirstMissingPositive {
	public:
		int firstMissingPositive(vector<int> &nums) {
			const int size = nums.size();
			
			for(int i = 0; i < size(); ++i) {
				while(nums[i] > 0 && (nums[i] <= size && nums[i] != i + 1 && (nums[i] != nums[nums[i] - 1]))) {
					int tmp = nums[nums[i] - 1];
					nums[nums[i] - 1] = nums[i];
					nums[i] = tmp;
				}
			}
			
			for(int i = 0; i < size; ++i) {
				if(nums[i] != i + 1) {
					return (i  + 1);
				}
			}
			return (size + 1);
		}
};