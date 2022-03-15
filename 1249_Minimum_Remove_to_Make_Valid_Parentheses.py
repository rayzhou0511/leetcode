class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        s = list(s)
        stack = []
        for i in range(len(s)):
            if s[i] == '(':
                stack.append(i)
            elif s[i] == ')':
                if len(stack) != 0:     # '()' match
                    stack.pop()
                else:
                    s[i] = ''           # clear useless ')'
                    
        for i in range(len(stack)):     # clear useless '('
            s[stack[i]] = ''
            
        return ''.join(s)
