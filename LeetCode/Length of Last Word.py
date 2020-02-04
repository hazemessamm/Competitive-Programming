class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.split(' ')
        counter = 0
        for i in range(len(s)):
            if len(s[i]) == 0:
                counter += 1
            else:
                break
        if counter == len(s):
            return 0
        if s[-1] is ' ' or s[-1] is '':
            for i in range(len(s)-1,-1,-1):
                if len(s[i]) > 0:
                    return len(s[i])
        else:
            return len(s[-1])
