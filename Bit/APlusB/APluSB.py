class Solution:
    def aPlusB(self, a, b):
        result, carry = a ^ b, a & b
        carry <<= 1
        if carry != 0:
            result = self.aPlusB(result, carry)
            
        return result