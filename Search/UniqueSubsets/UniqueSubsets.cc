class Solution {
    public:
        vector<vector<int>> subsetsWithDup(vector<int> &nums) {
            if(nums == NULL || nums.isEmpty())
                return NULL;
            
            vector<int> ret;
            sort(nums.begin(), nums.end());
            
            helper<int> list;
            dfs(nums, 0, list, ret);
            
            return ret;        
        }
        
    private:
        void helper(vector<int> &nums, int start, vector<int> &list, vector<int> &ret) {
            ret.push(list);
            
            for(int i = start; i < nums.size(); ++i) {
                if(i != start && nums[i] == nums[i - 1])
                    continue;
                list.push_back(nums[i]);
                dfs(nums, i + 1, list, ret);
                list.pop_back();
            }
        }
};
   