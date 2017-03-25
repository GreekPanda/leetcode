class RecoveryRotateSortedArray {
	public void recoveryRotateSortedArray(ArrayList<Integer> nums) {
		if(nums == null || nums.size() == 0)
			return;
		
		int pos = 1;
		while(pos < nums.size()) {
			if(nums.get(pos - 1) > nums.get(pos))
				break;
			pos++;
		}
		
		rotateHelper(nums, 0, pos - 1);
		rotateHelper(nums, pos, nums.size() - 1);
		rotateHelper(nums, 0, nums.size() - 1);
	}
	
	private void rotateHelper(ArrayList<Integer> nums, int left, int right) {
		while(left < right) {
			int tmp = nums.get(left);
			nums.set(left, nums.get(right));
			nums.set(right, tmp);
			left++;
			right--;
		}
	}
}