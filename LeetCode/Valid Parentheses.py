class Solution:
    def isValid(self, s: str) -> bool:
        x = []
        hashmap = {')':'(', '}':'{', ']':'[', '>':'<'}
        current_element = ''
        for i in range(len(s)):
            if hashmap.get(s[i]) is not None:
                if len(x) == 0:
                    current_element = '$'
                else:
                    current_element = x.pop()
                if current_element != hashmap.get(s[i]):
                    return False
            else:
                x.append(s[i])
        if len(x) == 0:
            return True
        else:
            return False
