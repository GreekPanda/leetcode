class FirstBadVersion {
	public:
		int firstBadVersion(int n) {
			int left = 0;
			int right = n + 1;
			while(left + 1 < right) {
				mid = left + (right - left) / 2;
				if(VersionControll::isBadVersion(mid))
					right = mid;
				else
					left = mid;
				
			}
			return (mid  + 1);
		}
};