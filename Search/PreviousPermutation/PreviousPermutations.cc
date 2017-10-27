class Solution {
    public:
        vector<int> previousPermutation(vector<int> &nums) {
            if (nums == NULL || nums.size() == 0)
                return;
            
            int i = -1;
            for(i = nums.size() - 2; i >= 0; i--) {
                if(nums[i] > nums[i + 1]) {
                    k = i;
                    break;            
                } else {
                    reverse(nums, 0, nums.size() - 1);
                    return;
                }
            }
            
            int j = 0;
            for(j = nums.size() - 1; j > i; --j) {
                if(nums[i] > nums[j])
                    break;
            }
           
            
            int tmp = nums[i];
            nums[j] = nums[i];
            nums[i] = tmp;
            
            reverse(nums, i + 1, nums.size() - 1);
            return nums;
        }
        
    private:
        void reverse(int[] nums, int start, int end) {
            for(int i = start, j = end; i < j; i++, j--) {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
                
            }
        }
}