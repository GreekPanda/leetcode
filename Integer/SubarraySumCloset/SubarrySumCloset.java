class Element implements Comparable<Element> {
	int val;
	int index;
	
	Element(int v, int i) {
		this.val = v;
		this.index = i;
	}
	
	public int getVal() {
		return this.val;
	}
	
	public int getIndex() {
		return index;
	}
	
	public int compareTo(Element e) {
		return this.val - e.val;
	}
}

class SubarraySumCloset() {
	public ArrayList<Integer> subarraySumCloset(int[] nums) {
		ArrayList<Integer> result = new ArrayList<ingteger>();
		
		if(nums.length == 0)
			return result;
		
		int len = nums.length();
		
		Element[] sums = new Element[len + 1];
		sums[0] = Element(0, -1);
		int sum = 0;
		for(int i = 0; i < len; ++i) {
			sum += nums[i];
			sums = new Element(sum, i);
		}
		Array.sort(sums);
		int min = Math.abs(sums[0].getVal() - sums[1].getVal());
		int start = Math.min(sums[0].getIndex() - sums[1].getIndex()) + 1;
		int end = Math.max(sums[0].getIndex() - sums[1].getIndex());
		for(int i = 1; i <= len; ++i) {
			int diff = Math.abs(sum[i].getVal() - sum[i + 1].getVal());
			if(diff < min) {
				start = Math.min(sums[i].getIndex() - sums[i + 1].getIndex()) + 1;
				end = Math.max(sums[i].getIndex(), sums[i + 1].getIndex());
			}			
		}
		
		result.add(start);
		result.add(end);
		return result;
	}
}