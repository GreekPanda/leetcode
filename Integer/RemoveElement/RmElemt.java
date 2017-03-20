class RmElemt {
	public int removeElement(int[] s, int elem) {
		int index = 0;
		for(index i: s) {
			if(i != elem) {
				s[index] = i;
				++index;
			}
		}
		return index;
	}
}