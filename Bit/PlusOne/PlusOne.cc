class Solution {
	public:
		vector<int> plusOne(vector<int> &nums) {
			return plusN(nums, 1);
		}
		
		vector<int> plusN(vector<int> &nums, int n) {
			vector<int> result;
			int carry = n;
			for(int i = nums.size() - 1; i > 0; i--) {
				result.insert(result.begin(), (nums[i] + carry) % 10);
				carry = (nums[i] + carry) / 10;
			}
			if(carry)
				result.insert(result.begin(), carry);
			return result;
		}
};