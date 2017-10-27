class Solution {
    public:
        long long permutationIndex(vector<int> &nums) {
            if (nums == NULL || nums.size() == 0)
                return;
            
            long long index = 0;
            long long factor = 0;
            for(int i = nums.size() - 1; i >= 0; --i) {
                int rank = 0;
                for(int j = i; j < nums.size(); ++j) {
                    if (nums[i] > nums[j]) ++rank;
                }
                index += rank * factor;
                factor *= (nums.size() - i);
                    
            }
            return index;
            
        }
};