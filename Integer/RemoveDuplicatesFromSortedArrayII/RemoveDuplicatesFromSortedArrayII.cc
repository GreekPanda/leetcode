class RemoveDuplicateFromSortedArrayII {
	public:
		int removeDuplicateFromSortedArrayII(vector<int> &nums) {
			int len = nums.size();
			if(len <= 2)
				return len;
			
			int index = 1;
			for(int i  = 2; i < len; ++i) {
				if(nums[i] != nums[index] || nums[i] != nums[index -1]) {
					index++;
					nums[index] = nums[i];
				}
			}
			return (index + 1);
		}
};