# Hint: greedy, 從尾開始加 
class Solution:
    def getSmallestString(self, n: int, k: int) -> str:
        output = [1]*n
        k -= n
        n -= 1
        while k != 0 and n != -1:
            if k >= 25:
                output[n] += 25
                k -= 25
                n -= 1
            elif k > 0 and k < 25:
                output[n] += k
                k -= k
                n -= 1
                
        for i in range(len(output)):
            output[i] = chr(output[i] + 96)
        
        return ''.join(output)
