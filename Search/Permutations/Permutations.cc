class Solution {
    public:
        vector<vector<int>> permute(vector<int> &nums) {
            if(nums == NULL || nums.isEmpty())
                return NULL;
            
            vector<vector<int>> ret;
            
            vector<int> list;
            helper(nums, list, ret);
            
            return ret;        
        }
        
    private:
        void helper(vector<int> &nums, vector<int> &list, vector<vector<int>> &ret) {
            
            if(nums.size() == list.size()) {
                ret.push_back(list);
                return;
            }
            
            for(int i = 0; i < nums.size(); ++i) {
                if(find(list.begin(), list.end(), nums[i]) != list.end())
                    continue;
                list.push_back(nums[i]);
                helper(nums, list, ret);
                list.pop_back();
            }
        }
};
   