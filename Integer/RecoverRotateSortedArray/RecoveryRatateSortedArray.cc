class RecoveryRotateSortedArray {
	public:
		void recoveryRotateSortedArray(vector<int> &nums) {
			
			for(vector<int>::size_type i = 0; i < nums.size(); i++) {
				if(nums[i] > nums[i + 1]) {
					rotateHelper(nums, 0, i);
					rotateHelper(nums, i + 1, nums.size() - 1);
					rotateHelper(nums, 0, nums.size() - 1);
					return;
				}
			}
	}
	
	private:
		void rotateHelper(vector<int> &nums, vector<int>::size_type start, vector<int>::size_type end) {
			while(vector<int>::size_type i = start ,j = end; i < j; ++i, --j) {
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
	}
}