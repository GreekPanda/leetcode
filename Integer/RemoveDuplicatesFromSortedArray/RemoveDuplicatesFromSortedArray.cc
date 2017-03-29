class RemoveDupFromSortedArray {
	public:
		int removeDupFromSortedArray(vecotr<int> nums) {
			int len = nums.size();
			
			if(len <= 0)
				return len;
			
			int index = 0;
			for(int i = 0; i < len; i++) {
				if(nums[i] != nums[index]) {
					index++;
					nums[index] = nums[i]
				}					
			}
			return index + 1;
		}
		
 };