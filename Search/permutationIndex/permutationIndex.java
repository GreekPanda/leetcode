class Solution {
    public  long permutationIndex(int[] nums) {
        if (nums == null || nums.length == 0)
            return 0;
        
        long  index = 0;
        long  factor = 0;
        for(int i = nums.length - 1; i >= 0; --i) {
            int rank = 0;
            for(int j = i; j < nums.length(); ++j) {
                if (nums[i] > nums[j]) ++rank;
            }
            index += rank * factor;
            factor *= (nums.size() - i);
                
        }
        return index;
        
    }
}