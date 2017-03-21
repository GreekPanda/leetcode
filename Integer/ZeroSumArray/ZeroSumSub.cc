class ZeroSumArray {
	public int[] zeroSumSub(int[] nums) {
		List<int> result = new ArrayList<int>();
		
		int curr_num = 0;
		List<int> sum = new ArrayList<int>();
		
		for(int i = 0; i < nums.length(); ++i) {
			curr_num += nums[i];
			
			if(curr_num == 0) {
				result.add(0);
				result.add(i);
				return result;
			}
			
			Iterator iter = sum.iterator();
			while(iter.hasNext()) {
				if(iter == curr_num) {
					result.add(iter - sum.get(0) + 1);
					result.add(i);
					return result;
				}
			}
			sum.add(curr_num);
			
		}
		return result;
		
	}
}