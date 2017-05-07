class Solution {
    public:
        int findPeakElement(vector<int> &nums) {
            if(nums.isEmpty())
                return -1;

            int start = 0;
            int end = nums.size() - 1;

            while(start + 1 < end) {
                int mid = start + (end - start) / 2;
                if(nums[mid] < nums[mid - 1]) {
                    end = mid;
                } else if(nums[mid] > nums[mid + 1]) {
                    start = mid;
                } else
                    return mid;
            }
            int mid = nums[start] > nums[end] ? start : end;
            return mid;
        }
};
