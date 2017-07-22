class Solution {
    public List<List<Integer>> permute(int[] nums) {
        if(nums == null || nums.length == 0)
            return null;
        
        List<List<Integer>> ret = new ArrayList< ArrayList<Integer>>();
        List<Integer> list = new ArrayList<Integer>(nums);
        
        Array.sort(list);
        
        while(true) {
            ret.add(new ArrayList<Integer>(list));
            int k = -1;
            for(int i = list.size() - 2; i > 0; i--) {
                if(list.get(i) < list.get(i + 1)) {
                    k = i;
                    break;
                }
            }
            if(k == -1) break;
            int l = list.size() - 1;
            while(l > k && list.get(l) <= list.get(k)) l--;
            Collection.swap(list, k, l);
            reverse(list, k + 1, list.size() - 1);
        }
        
        return ret;
    }
    
    private void reverse(List<Integer> list, int start, int end) {
        for(int i = start, j = end; i < j; i++, j--) {
            Collection.swap(list, i, j);
        }
    }
}