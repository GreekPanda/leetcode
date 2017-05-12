class Solution {
	public:
		vector<int> printNumber(int n) {
		if(n < 0)
			return null;
		
		vector<int> result;
		helper(n, result);
		return result;
	}
	
	private void helper(int n, vector<int> nums) {
		if(n == 0)
			return;
		
		helper(n - 1, nums );
		
		int base = Math.pow(10, n - 1);
		int size = nums.size();
		for(int i = 1; i < 10; ++i) {
			nums.push_back(i);
			for(int j = 1; j < size; ++j) {
				nums.push_back(nums.get(j) + base * i);
			}
		}
	}
}