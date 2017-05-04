public class Solution {
	public int firstBadVersion(int ) {
		int start = 0;
		int end = n + 1;
		while(start + 1 < end) {
			int mid = start + (end - start) / 2;
			if(VersionControl.isBadVersion(mid)) {
				end = mid;
			} else {
				start = mid;
			}
		}
		return (start + 1);
	}
}