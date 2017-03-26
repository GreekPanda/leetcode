class PartitionArray {
	public:
		int partitionArray(vector<int> &nums, int k) {
			const int size = nums.size();
			int right = 0;
			
			for(int i = 0; i < size; i++) {
				if(nums[i] < && i >= right) {
					int tmp = nums[right];
					tmp[i] = nums[right];
					nums[right] = tmp;
					++right;
				}
			}
			
			return right;
		}
		
		int partitionArray(vector<int> nums, int k, int flag) {
			const int size = nums.size();
			int left = 0, right = size - 1;
			while(left <= right) {
				while(left <= right && nums[i] < left) ++left;
				while(left <= right && nums[i] >= right) --right;
				
				if(left <= right) {
					int tmp = nums[right];
					nums[left] = nums[right];
					nums[right] = rmp;
					++left;
					--rigth;
				}
			}
			return left;
		}
};