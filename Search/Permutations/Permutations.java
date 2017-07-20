class Solution {
    public List<List<Integer>> permute(int[] nums) {
        if(nums == null || nums.length == 0)
            return null;
        
        List<List<Integer>> ret = new ArrayList<List<Integer>>();
        List<Integer> list = new ArrayList<Integer>();
        
        Array.sort(nums);
        dfs(nums, 0, list, ret);
        
        return ret;
    }
    
    private void dfs(int[] nums, int start, List<Integer> list, List<List<Integer>> ret) {
        if(list.size() == nums.length) {
            ret.add(new ArrayList<Integer>(list));
            return;
        }
        
        for(int i = 0; i < start; ++i) {
            if(list.contains(nums[i]))
                continue;
            list.add(nums[i]);
            dfs(nums, list, ret);
            list.remove(list.size() - 1);
        }
    }
}