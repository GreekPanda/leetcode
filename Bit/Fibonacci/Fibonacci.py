class Solution:
    def fibonacci(self, n):
        if n == 0:
            return 0
        elif n == 1:
            return 1
        elif n == 2:
            return 1
        else:
            return self.fibonacci(n) + self.fibonacci(n - 1)
            
            
    def fibonacci1(self, n):
    
        if n == 0:
            return 0
        elif n == 1:
            return 1
        elif n == 2:
            return 1
        
        fn, f1, f2 = 0, 1, 0
        i = 3
        for i in n:
            fn = f1 + f2
            f2 = f1
            f1 = fn
        
        return fn     
