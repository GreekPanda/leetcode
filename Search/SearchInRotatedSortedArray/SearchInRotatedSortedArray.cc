class Solution {
    public: 
        int searchInRotatedSortedArray(vector<int> &nums, int target) {
            if(nums.isEmtpy())
                return -1;

            int start = 0;
            int end = nums.size() - 1;
            int mid = 0;

            while(start + 1 < end) {
                mid = start + (end - start) / 2;
                if (target == nums[mid])
                    return mid;

                if (nums[start] < nums[mid]) {
                    if (nums[start] <= target && target < nums[mid])
                        end = mid;
                    else
                        start = mid; 
                } else {
                    if (nums[mid] < target && target <= nums[end])
                        start = mid;
                    else
                        end = mid;
                }

            }

            if (nums[start] == target)
                return start;
            if (nums[end] == target)
                return end;

            return -1

        }
};
