class SpaceReplace {
	public char[] replaceString(char[] str, int len) {
		if(len == 0 || str == null)
			return null;
		
		
		int spaces = 0;
		for(char c : str) {
			if (c == ' ') {
				space++;
			}
		}
		
		int index = len + spaces * 2 - 1;
		for(int i = len - 1; i >  0; i--) {
			if(str[i] != ' ') {
				str[index] = str[i];
				index--;
			} else {
				str[index--] = '0';
				str[index--] = '2';
				str[index--] = '%';
			}
		}
		return str;
	}
}