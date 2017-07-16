"""
class TreeNode:
    def __init__(self, v):
        self.val = v
        self.left, self.right = None, None 
"""
class BSTIterator:
    def __init__(self, s, root):
        self.stack = s
        self.curr = root
   
    def hasNext(self):
        return (curr && stack)
        
    def next(self) 
        while curr:
            stack.push(curr)
            curr = curr.left
            
        curr = stack.top()
        stack.pop()
        node = curr
        curr = curr.right
        
        return node
                
    
        
       
