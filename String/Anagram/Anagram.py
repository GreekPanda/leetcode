class Anagram:
"""
@param s: The first string
@param b: The second string
@return true or false
"""
def anagram(self, s, t):
	return collections.Counter(s) == collections.Counter(t)