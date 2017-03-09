class Anagram:
	def anagram(self, s, t):
		return sorted(s) == sorted(t)
		