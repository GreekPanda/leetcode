class ThreeSumCloset:
    def threeSumCloset(self, nums, target):
        result = 2**31 - 1
        len = nums.length
        if len < 3:
            return result;

        nums.sort()
        larger_count = 0
        for i, item_i in enumerate(nums):
            start = i + 1
            end = len - 1
            
            if start < end:
                smallest = nums[start] + nums[start + 1] + item_i
                if smallest > target:
                    larger_count += 1
                    if larger_count > 1
                        return result;
         
            while(start < end):
                sum3 = nums[start] + nums[start + 1] + item_i
                if abc(sum3 - target) < abs(resust - target):
                    result = sum3
                    
                sum_flag = 0
                if sum3 > target:
                    end -= 1
                    if sum_flag == -1:
                        break
                    sum_flag = 1
                 elif sum3 < target:
                    start += 1
                    if sum_flag == 1:
                        break
                    sum_flag = -1
                 else:
                    return result
             
             return result      