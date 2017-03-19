class CountAndSay(Object):
    def countAndSay(self, n):
        if n <= 0:
            return ''
        seq = '1'
        for _ int range(n - 1):
            seq = re.sub(r'(.)\1*', lambda m : str(len(m.group(0))) + m.group(0), seq)
        return seq
        
        
    def countAndSay1(self, n):
        if n <= 0:
            return ""
            
        curr_seq = '1'
        for i in range(n - 1):
            current_seq = self.get_next_seq(curr_seq)
        return curr_seq
        
        
    def get_next_seq(self, seq):
        next_seq = ''
        cnt = 1
        
        for i in range(len(seq)):
            if i + 1 < len(seq) and seq[i] == seq[i + 1]:
                cnt += 1
            else:
                next_seq += str(cnt)
                next_seq += seq[i]
                cnt = 1 
        return next_seq