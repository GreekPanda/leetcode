class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        if(nums == null || nums.length == 0)
            return null;
        
        ArrayList<Integer> ret = new ArrayList<Integer>();
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        Array.sort(nums);
        dfs(nums, 0, list, ret);
        
        return ret;
    }
    
    private void dfs(int[] nums, int start, List<Integer> list, List<Integer> ret) {
        ret.add(new ArrayList<Integer>(list));
        
        for(int i = 0; i < start; ++i) {
            if(i != start && nums[i] == nums[i - 1])
            list.add(nums[i]);
            dfs(nums, i + 1, list, ret);
            list.remove(list.size() - 1);
        }
    }
}