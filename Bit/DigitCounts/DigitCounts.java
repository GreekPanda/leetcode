class Solution {
	public int digitCounts(int n, int k) {
		char c = k + '0';
		int count = 0;
		for(int i = k; i <= n; i++) {
			char[] iChars = Integer.toString(i).toCharArray();
			for (char iChar : iChars) {
				if (kChar == iChar) 
					count++;
			}
		}
		return count;
	}
}