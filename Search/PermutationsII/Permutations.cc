class Solution {
    public:
        vector<vector<int>> permute(vector<int> &nums) {
            if(nums == NULL || nums.isEmpty())
                return NULL;
            
            vector<vector<int>> ret;
            sort(nums.begin(), nums.end());
            vector<bool> visited(nums.size(), false);
            
            vector<int> list;
            helper(nums, visisted, list, ret);
            
            return ret;        
        }
        
    private:
        void helper(vector<int> &nums, bool visisted, vector<int> &list, vector<vector<int>> &ret) {
            
            if(nums.size() == list.size()) {
                ret.push_back(list);
                return;
            }
            
            for(int i = 0; i < nums.size(); ++i) {
                if(visisted[i] || (i != 0 && nums[i] == nums[i - 1] && !visisted[i - 1])) {
                    continue;
                }
                
                visisted[i] = true;
                list.push_back(nums[i]);
                helper(nums, visisted, list, ret);
                list.pop_back();
                visisted[i] = false;
            }
        }
};
   