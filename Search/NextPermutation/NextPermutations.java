class Solution {
    public void nextPermutation(int[] nums) {
        if (nums == null || nums.length == 0)
            return;
        
        int k = -1;
        for(int i = nums.length - 1; i >= 0; i--) {
            if(nums[i] < nums[i + 1])
                k = i;
                break;            
        }
        
        if(k == -1) {
            reverse(nums, 0, nums.length - 1);
            return;
            
        }
        
        int l = nums.length - 1;
        while(l > k && nums[l] <= nums[k]) l--;
        
        int tmp = nums[k];
        nums[k] = nums[l];
        nums[l] = tmp;
        
        reverse(nums, k + 1, nums.length - 1);
    }
    
    private void reverse(int[] nums, int start, int end) {
        for(int i = start, j = end; i < j; i++, j--) {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            
        }
    }
}