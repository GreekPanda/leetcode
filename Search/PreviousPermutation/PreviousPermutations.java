class Solution {
    public List<Integer> previousPermutation(List<Integer> nums) {
        if (nums == null || nums.length == 0)
            return null;
        
        ArrayList<Integer> perm = new ArrayList<Integer>();
        
        int k = -1;
        for(int i = perm.size() - 2; i >= 0; i--) {
            if(perm.get[i] > perm.get[i + 1]) {
                k = i;
                break;            
            }
        }
        
        if(k == -1) {
            reverse(perm, 0, perm.size() - 1);
            return perm;
            
        }
        
        int l = perm.size() - 1;
        while(l > k && perm.get(l) <= perm.get(k)) l--;
        
        Collection.swap(perm, k, l);
        
        reverse(perm, k + 1, perm.size() - 1);
        return perm;
    }
    
    private void reverse(int[] nums, int start, int end) {
        for(int i = start, j = end; i < j; i++, j--) {
            Collection.swap(num, i, j);
            
        }
    }
}