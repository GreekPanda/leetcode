class Solution {
    public int minSum(int[][] triangle) {
        if(triangle == null || triangle.length == 0)
            return 0;
        
        int[] last = new int[triangle.length];
        int[] cur = new int[triangle.length];
        
        last = triangle[0][0];
        cur[0] = last[0];
        
        for(int i = 1; i < triangle.length; ++i) {
            for(int j = 0; j < i + 1; ++j) {
                int sum = Integer.MAX_VALUE;
                if(j != 0)
                    sum = triangle[i][j] + last[j - 1];
                
                if(j != i)
                    sum = Math.min(sum, triangle[i][j] + last[j]);
                
                cur = sum;
            }
        }
        
        for(int k = 0; k < i + 1; k++)
            last[k] = cur[k];
        
        int min = Integer.MAX_VALUE;
        for(int n : cur)
            min = Math.min(n, min);
        
        return min;
    }
}