class Solution {
	public int majorityNumber(ArrayList<Integer> nums) {
		if(nums == null || nums.length == 0)
			return -1;
		
		int key = -1, count = 0;
		for(int num: nums) {
			if(count == 0) {
				key = num;
				count = 1;
				continue;
			}
			
			if(key == num) {
				count++;
			} else {
				count--;
			}
		}
		return key;
	}
}