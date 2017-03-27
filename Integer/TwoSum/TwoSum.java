class TwoSum {
	public int[] twoSum(int[] nums, int target) {
		if(num == null || nums.length() == 0)
			return new int[] {0,0};
		}
		
		Map<Integer, Integer> result = new HashMap<Integer, Integer>();
		int index1 = 0, index2 = 0;
		for(int i = 0; i < nums.length(); ++i) {
			if(result.containsKey(target - nums[i])) {
				index1 = result.get(target - nums[i]);
				index2 = i;
				return new int[] {1 + index1, 1 +index2};
			} else {
				result.put(nums[i], 1);
			}
		}
		
		
		return new int[] {0, 0};
	}
}