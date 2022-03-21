class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        ans = []
        count = 0
        flag = 0
        last = {c : i for i, c in enumerate(s)}
        print(last)
        for i, c in enumerate(s):
            count = max(count, last[c])
            if i == count:
                ans.append(count - flag + 1)
                flag = count + 1
        return ans
