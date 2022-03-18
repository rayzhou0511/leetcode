class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        last_accur = {}
        stack = []
        for i in range(len(s)):
            last_accur[s[i]] = i
            
        for i in range(len(s)):
            if s[i] not in stack:
                while stack and stack[-1] > s[i] and last_accur[stack[-1]] > i:  #表示stack[-1]以後還會出現
                    stack.pop()
                stack.append(s[i])
            
        return "".join(stack)
