class Solution:
    def fastPower(self, a, b, n): 
        if n == 1:
            return a % b
        elif n == 0:
            return 1 % b
        elif n < 0:
            return -1
            
        product = self.fastPower(a, b, n / 2)
        product = (product * product ) % b
        if product % 2 == 1:
            product = (product * a) % b
            
        return product
            