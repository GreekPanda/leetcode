class Solution {
    public:
        vector<vector<int>> subsets(vector<int> &nums) {
            if(nums == NULL || nums.isEmpty())
                return NULL;
            
            vector<int> ret;
            sort(nums.begin(), nums.end());
            
            vector<int> list;
            dfs(nums, 0, list, ret);
            
            return ret;        
        }
        
    private:
        void dfs(vector<int> &nums, int start, vector<int> &list, vector<int> &ret) {
            ret.push(list);
            
            for(int i = start; i < nums.size(); ++i) {
                list.push_back(nums[i]);
                dfs(nums, i + 1, list, ret);
                list.pop_back();
            }
        }
};
   