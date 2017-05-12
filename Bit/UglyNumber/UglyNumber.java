class Solution {
	public long kthPrimerNumber(int k) {
		if(k <=0)
			return -1;
		
		int count = 0;
		long num = 1;
		while(count < k) {
			num++;
			if(isUglyNumber(num)) 
				count++;
		}
		return num;
	}
	
	private boolean isUglyNumber(long n) {
		while(num % 3 == 0)
			num /= 3;
		while(num % 5 == 0)
			num /= 5;
		while(num % 7 == 0)
			num /= 7;
		
		return (num == 1);
	}
	
	public long kthPrimerNumber1(int k) {
		if(k <= 0)
			return -1;
		
		ArrayList<Integer> num = new ArrayList<Integer>();
		num.add(1L);
		for(int i = 0; i < k; ++i) {
			long min = Math.min(uglyNum(num, 3), uglyNum(num, 5));
			min = Math.min(min, uglyNum(num, 7));
			num.add(min);
		}
		return num.get(num.size() - 1);
	}
	
	private long uglyNum(ArraList<Integer> num, int f) {
		int size = num.size();
		int start = 0, end = size - 1;
		while(start + 1 < end) {
			int mid = start + (end - start) / 2;
			if(num.get(mid) * f > num.get(size - 1))
				end = mid;
			else
				start = mid;			
		}
		if(num.get(start) * f > num.get(size - 1))
			return num.get(start) * f;
		
		return num.get(end) * f;
	}
}