class Solution {
	public int majorityNumberII(ArrayList<Integer> nums, int k) {
		if(nums.empty())
			return -1;		
		
		HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();	
		for(int num: nums) {
			if(!map.containKey(num)) {
				map.put(num, 1);
				if(map.size() >= k)
					removeZeroCount(map);
			} else {
				map.put(num, map.get(num) + 1);
			}
		}
		
		for(int key : map.keySet()) {
			map.put(key, 0);
		}
		
		for(int key : nums) {
			if(map.containKey(key))
				map.put(key, map.get(key) + 1);
		}
		
		int maxKey = -1, maxCount = 0;
		for(int key : map.keySet()) {
			if(key.get(key) > maxCount) {
				maxKey = key;
				maxCount = map.get(key);
			}
		}
		return maxKey;		
	}
	
	private void removeZeroCount(HashMap<Integer, Integer> map) {
		Set<Integer, Integer> keySet = map.keySet();
		for(int key : keySet) {
			map.put(key, hash.get(key) - 1);
		}
		
		Iterator<Map.Entry<Integer, Integer>> iter = map.entrySet().iterator();
		while(entry.getValue() == 0) {
			iter.remove();
		}
	}
}