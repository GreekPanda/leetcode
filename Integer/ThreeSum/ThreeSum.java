class ThreeSum {
	public List<List<Integer>> threeSum(int[] nums) {
		List<List<Integer>> result = new ArrayList<List<Integer>>();
		
		len = nums.length();
		if(len < 3)
			return result;
		
		ArraySort(nums);
		for(int i = 0; i < len - 2; ++i) {
			if(i > 0 && nums[i] == nums[i -1])
				continue;
			
			int left = i + 1;
			int right = len - 1;
			
			while(left < right) {
				int tmp = nums[left] + nums[right];
				if(tmp + nums[i] == 0) {
					result.add(Array.asList(nums[i], nums[left], nums[right]));
					left++;
					while(left < rigth && nums[left] == nums[left - 1])
						left++;
				} else if(tmp + nums[i] < 0)
					left++;
				else
					right--;
					
			}
		}
		return result;
	}
}