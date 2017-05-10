class Solution {
    public int mySqrt(int x) {
        if(x < 0)
            return -1;
        else if (x == 0)
            return 0;


        int start = 0;
        int end = x;
        while(start + 1 < end) {
            int mid = start + (end - start) / 2;
            if(mid * mid == x)
                return mid;
            else if (mid * mid < x)
                start = mid;
            else
                end = mid; 
        }
        return start;
    }
}
        
