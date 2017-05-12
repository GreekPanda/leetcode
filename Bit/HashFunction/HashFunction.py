class Solution(object):
    def hashFunction(self, s, n):
        if s is none:
            return -1
            
        hashSum = 0
        for i in xrange(s):
            hashSum += s[i] * self.modPow(33, len(s) - i - 1, n)
            hashSum %= n
        return (int)hashSum
        
     def modPow(self, base, n, mod) 
		if(n == 0):
			return 1
		elif n == 1:
			return (base % mod)
		elif n % 2 == 0:
			tmp = self.modPow(base, n / 2, mode)
			return (tmp % mod) * (tmp % mod) % mod
		else:
			return (base % mod) * self.modPow(base, n - 1, mod) % mod
			
		