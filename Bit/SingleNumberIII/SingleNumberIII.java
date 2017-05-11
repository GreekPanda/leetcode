class Solution {
	public List<Integer> singleNumberIII(int[] nums) {

		if(nums == null || nums.length == 0)
			return null;
		
		ArrayList<Integer> tmp = new ArrayList<Integer>();
		int ret = 0;
		
		for(int i: nums)
			ret ^= i;
		
		int lastBit = ret - (ret & (ret - 1));
		int num1 = 0, num2 = 0;
		for(int i : nums) {
			if((lastBit & i) == 0)
				num1 ^= i;
			else
				num2 ^= i;
		}
		
		ret.add(num1);
		ret.add(num2);
		return ret;
		
	}
}