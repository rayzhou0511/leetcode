class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        lens = len(people)
        people.sort()
        count = 0
        ans = 0
        while(count < len(people)):
            buffer = limit - people[-1]
            people.pop()
            
            if count != len(people) and people[count] <= buffer :
                count += 1
            ans += 1
            
        return ans
