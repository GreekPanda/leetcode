public class Strstr {
    public int strstr(String src, String target) {
            
        if(src == null && target == null)
            return 0;
		
        if(src == null)
			return -1;
		
		if(target == null)
			return 0;
        
		for(int i = 0; i < src.length() -  target.length() + 1; i++) {
			int j = 0;
			for(; j < target.length; j++) {
				if(src.CharAt(i + j) == target.CharAt(j))
					break;
			}
			if( j == target.length())
				return i;
		}
		return -1;
}