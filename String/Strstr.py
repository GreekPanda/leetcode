class Solution:
	def strstr(self, src, target):
	    if src is None or target is None:
	        return -1
	
	    for i in range(len(src) - len(target) + 1):
	        for j in range(len(target)):
	            if src[i + j] !=  target[j]:
	                break;
	            else:
	                return i
	    return -1;