class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        i = 0
        flag = False
        window = len(needle)
        haystack_length = len(haystack)
        if len(needle) == 0:
            return 0
        while i < haystack_length:
            if haystack[i: i+window] == needle:
                return i
            i+=1
        return -1
