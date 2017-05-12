class Solution {
	public:
		int majorityNumberIII(vector<int> &nums, int k) {
			if(nums == null || nums.size == 0)
				return -1;		
			
			unorder_map<int, int> map;	
			for(auto num: nums) {
				if(map.size() < k)
					map[n]++;
				else {
					if(map.count(n))
						map[n]++;
					else {
						map[n] = 1;
						vector<int> keys;
						for(auto &it: map) {
							it.second--;
							if(!it.second)
								keys.push_bask(it.first);
						}
					}
				}					
			}
			
			int max = 0, ret = 0;
			for(auto &it: map) {
				if(it.second > max) {
					ret = it.first;
					max = it.second;
				}
			}
			return ret;				
		}
};