class Solution:
    def simplifyPath(self, path: str) -> str:
        path = path.split('/')
        output = []
        re = ''
        print(path)
        for i in range(len(path)):
            if path[i] == '.' or path[i] == '/' or path[i] == '':
                continue
            elif path[i] == '..':
                if len(output) != 0:
                    output.pop()
            else:
                output.append(path[i])
                
        for i in range(len(output)):
            re += '/'
            re += output[i]
        if len(re) == 0:
            re += '/'
        return re
            
